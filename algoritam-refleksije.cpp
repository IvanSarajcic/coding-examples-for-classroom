// Алгоритам трансформације садржаја матрица. Поступак рефлексије елемената

#include <iostream>
using namespace std;
const int MAX = 100;
void refleksija(int mat[MAX][MAX], int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m / 2; j++) {
            swap(mat[i][j], mat[i][m - j - 1]);
        }
    }
}
void ispisiMatricu(int mat[MAX][MAX], int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}
int main() {
    int mat[MAX][MAX];
    int n, m;
    cout << "Unesite dimenzije matrice (n m): ";
    cin >> n >> m;
    cout << "Unesite elemente matrice:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> mat[i][j];
        }
    }
    refleksija(mat, n, m);
    cout << "Matrica nakon refleksije:" << endl;
    ispisiMatricu(mat, n, m);
    return 0;
}

