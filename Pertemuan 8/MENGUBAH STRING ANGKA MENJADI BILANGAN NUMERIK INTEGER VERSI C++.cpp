#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    string kata;
    int angka;
    int hasil;

    cout << "Masukkan angka dalam bentuk tulisan: ";
    cin >> kata;

    angka = atoi(kata.c_str());   // ubah string ke integer
    hasil = angka + 7;

    cout << "Hasil perubahan ditambah 7 = " << hasil << endl;

    return 0;
}

