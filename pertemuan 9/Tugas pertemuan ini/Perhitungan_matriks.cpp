#include <iostream>
using namespace std;

int main() {
    int baris, kolom;

    cout << "PROGRAM OPERASI MATRIKS\n";
    cout << "==========================\n\n";

    cout << "Masukkan jumlah baris matriks : ";
    cin >> baris;
    cout << "Masukkan jumlah kolom matriks : ";
    cin >> kolom;

    int A[10][10], B[10][10], C[10][10];

    // Input matriks A
    cout << "\nInput Matriks A:\n";
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            cout << "A[" << i << "][" << j << "] = ";
            cin >> A[i][j];
        }
    }

    // Input matriks B
    cout << "\nInput Matriks B:\n";
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            cout << "B[" << i << "][" << j << "] = ";
            cin >> B[i][j];
        }
    }

    // PENJUMLAHAN
    cout << "\nHASIL PENJUMLAHAN (A + B):\n";
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            C[i][j] = A[i][j] + B[i][j];
            cout << C[i][j] << "\t";
        }
        cout << endl;
    }

    // PENGURANGAN
    cout << "\nHASIL PENGURANGAN (A - B):\n";
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            C[i][j] = A[i][j] - B[i][j];
            cout << C[i][j] << "\t";
        }
        cout << endl;
    }

    // PERKALIAN (syarat kolom A = baris B, di soal sama ukurannya)
    cout << "\nHASIL PERKALIAN MATRIKS (A x B):\n";
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            C[i][j] = 0;
            for (int k = 0; k < kolom; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
            cout << C[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}

