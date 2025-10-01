#include <iostream>
using namespace std;

// Function to print the matrix
void printMatrix(int matrix[2][3]);

int main() {
    int matrix[2][3] = { {1, 2, 3}, {4, 5, 6} };
    cout << "Matrix example placeholder." << endl;
    printMatrix(matrix);
    return 0;
}

// Function to print the matrix
void printMatrix(int matrix[2][3]) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}
