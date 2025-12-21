#include <iostream>
#include <string>
using namespace std;

double konversiSuhu(double nilai, string dari, string ke) {
    double hasil;

    double celsius;

    if (dari == "C") {
        celsius = nilai;
    }
    else if (dari == "F") {
        celsius = (nilai - 32) * 5.0 / 9.0;
    }
    else if (dari == "K") {
        celsius = nilai - 273.15;
    }
    else {
        cout << "Satuan awal tidak dikenal!\n";
        return 0;
    }

    if (ke == "C") {
        hasil = celsius;
    }
    else if (ke == "F") {
        hasil = (celsius * 9.0 / 5.0) + 32;
    }
    else if (ke == "K") {
        hasil = celsius + 273.15;
    }
    else {
        cout << "Satuan tujuan tidak dikenal!\n";
        return 0;
    }

    return hasil;
}

int main() {
    string dari, ke;
    double nilai;

    cout << "=== PROGRAM KONVERSI SUHU ===\n";
    cout << "Pilih satuan awal:\n";
    cout << "C = Celsius\n";
    cout << "F = Fahrenheit\n";
    cout << "K = Kelvin\n";
    cout << "Masukkan pilihan satuan awal: ";
    cin >> dari;

    cout << "Masukkan nilai suhu: ";
    cin >> nilai;

    cout << "\nPilih satuan tujuan:\n";
    cout << "C = Celsius\n";
    cout << "F = Fahrenheit\n";
    cout << "K = Kelvin\n";
    cout << "Konversi ke: ";
    cin >> ke;

    double hasil = konversiSuhu(nilai, dari, ke);

    cout << "\nHasil konversi: " << hasil << " " << ke << endl;

    return 0;
}
