#include <iostream>
using namespace std;

class Matrix {
private:
    int rows, cols;
    int data[10][10];

public:
    Matrix(int r = 0, int c = 0) {
        rows = r;
        cols = c;
    }

    void input() {
        for(int i = 0; i < rows; i++)
            for(int j = 0; j < cols; j++)
                cin >> data[i][j];
    }

    void display() {
        for(int i = 0; i < rows; i++) {
            for(int j = 0; j < cols; j++)
                cout << data[i][j] << " ";
            cout << endl;
        }
    }

    friend Matrix operator*(const Matrix &m1, const Matrix &m2);
};

Matrix operator*(const Matrix &m1, const Matrix &m2) {
    Matrix result(m1.rows, m2.cols);

    for(int i = 0; i < m1.rows; i++) {
        for(int j = 0; j < m2.cols; j++) {
            result.data[i][j] = 0;
            for(int k = 0; k < m1.cols; k++) {
                result.data[i][j] += m1.data[i][k] * m2.data[k][j];
            }
        }
    }

    return result;
}

int main() {
    Matrix A(2,2), B(2,2), C;

    cout << "Enter matrix A:\n";
    A.input();

    cout << "Enter matrix B:\n";
    B.input();

    C = A * B;

    cout << "Result matrix:\n";
    C.display();

    return 0;
}