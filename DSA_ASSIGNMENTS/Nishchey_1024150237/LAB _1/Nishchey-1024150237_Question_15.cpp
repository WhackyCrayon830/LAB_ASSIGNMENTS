#include <iostream>
#include <ctime>
using namespace std;

// Simple program to multiply two matrices

int main() {
    int dims = 10;

    int A[10][10], B[10][10], C[10][10];

    srand(time(0));

    for (int i = 0; i < dims; i++)
        for (int j = 0; j < dims; j++){
            A[i][j] = (rand() % 10) + 1;
            B[i][j] = (rand() % 10) + 1;
        }


    // Initialize result matrix to 0
    for (int i = 0; i < dims; i++)
        for (int j = 0; j < dims; j++)
            C[i][j] = 0;

    // Matrix multiplication
    for (int i = 0; i < dims; i++) {
        for (int j = 0; j < dims; j++) {
            for (int k = 0; k < dims; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    cout << "\nMultiplication Result:\n";
    for (int i = 0; i < dims; i++) {
        for (int j = 0; j < dims; j++)
            cout << C[i][j] << " ";
        cout << endl;
    }

    return 0;
}
