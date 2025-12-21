#include <iostream>
#include <string>
using namespace std;

int hitungKarakter(string kalimat, char cari) {
    int jumlah = 0;
    for (int i = 0; i < kalimat.length(); i++) {
        if (kalimat[i] == cari) {
            jumlah++;
        }
    }
    return jumlah; // nilai balik
}

int main() {
    string kalimat;
    char karakter;

    cout << "Masukkan sebuah kalimat: ";
    getline(cin, kalimat);

    cout << "Karakter apa yang ingin dihitung: ";
    cin >> karakter;

    int hasil = hitungKarakter(kalimat, karakter);

    cout << "\nJumlah karakter '" << karakter 
         << "' dalam kalimat = " << hasil << endl;

    return 0;
}

