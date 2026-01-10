#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    string namaUser;
    int jumlah;

    // Input identitas user
    cout << "Masukkan nama yang ingin jadi data dokumen kamu : ";
    getline(cin, namaUser);

    // Input jumlah mahasiswa
    cout << "\nMasukkan jumlah mahasiswa: ";
    cin >> jumlah;
    cin.ignore(); // membersihkan buffer

    // Array 2 dimensi
    string mahasiswa[jumlah][2];

    // Input data mahasiswa
    for (int i = 0; i < jumlah; i++) {
        cout << "\nMahasiswa ke-" << i + 1 << endl;
        cout << "Nama : ";
        getline(cin, mahasiswa[i][0]);
        cout << "NPM  : ";
        getline(cin, mahasiswa[i][1]);
    }

    // Output
    cout << "\n====================================\n";
    cout << "            " << namaUser << endl;
    cout << "====================================\n\n";

    // Tabel
    cout << left << setw(5) << " No"
         << setw(20) << "  Nama Mahasiswa"
         << setw(15) << "  NPM" << endl;
    cout << "-----------------------------------------\n";

    for (int i = 0; i < jumlah; i++) {
        cout << left << setw(5) << i + 1
             << setw(20) << mahasiswa[i][0]
             << setw(15) << mahasiswa[i][1] << endl;
    }


    return 0;
}

