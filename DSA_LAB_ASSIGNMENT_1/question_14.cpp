#include <iostream>
using namespace std;

// Simple program to add and subtract two matrices
// TODO: maybe later add multiplication as well

int main() {
    int rows, cols;

    cout << "Enter rows and columns: ";
    cin >> rows >> cols;

    int matA[10][10], matB[10][10];
    int sumMat[10][10], diffMat[10][10];

    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            matA[i][j] = (rand() % 10) + 1;

    for (int i = 0; i < rows; i++) 
        for (int j = 0; j < cols; j++)
            matB[i][j]  = (rand() % 10) + 1;

    for (int i = 0; i < rows; i++) 
        for (int j = 0; j < cols; j++) {
            sumMat[i][j] = matA[i][j] + matB[i][j];
            diffMat[i][j] = matA[i][j] - matB[i][j];
        }

    cout << "\nAddition:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << sumMat[i][j] << " ";
        }
        cout << endl;   // move to next row
    }

    cout << "\nSubtraction:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++)
            cout << diffMat[i][j] << " ";
        cout << endl;
    }

    return 0;
}
