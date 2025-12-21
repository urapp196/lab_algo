#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int banyakJenis;
    cout << "GEROBAK FRIED CHICKEN\n";
    cout << "=============================\n";
    cout << "Kode   Jenis    Harga\n";
    cout << "=============================\n";
    cout << "D      Dada     Rp.2500\n";
    cout << "P      Paha     Rp.2000\n";
    cout << "S      Sayap    Rp.1500\n";
    cout << "=============================\n\n";

    cout << "Banyak Jenis : ";
    cin >> banyakJenis;

    char kode[20];
    int banyakPotong[20];
    int hargaSatuan[20];
    string namaJenis[20];
    int jumlahHarga[20];

    for (int i = 0; i < banyakJenis; i++) {
        cout << "\nJenis ke-" << i + 1 << endl;
        cout << "Jenis Potong [D/P/S] : ";
        cin >> kode[i];

        if (kode[i] == 'D' || kode[i] == 'd') {
            hargaSatuan[i] = 2500;
            namaJenis[i] = "Dada";
        }
        else if (kode[i] == 'P' || kode[i] == 'p') {
            hargaSatuan[i] = 2000;
            namaJenis[i] = "Paha";
        }
        else if (kode[i] == 'S' || kode[i] == 's') {
            hargaSatuan[i] = 1500;
            namaJenis[i] = "Sayap";
        }
        else {
            cout << "Kode tidak valid! otomatis dianggap Sayap.\n";
            hargaSatuan[i] = 1500;
            namaJenis[i] = "Sayap";
        }

        cout << "Banyak Potong : ";
        cin >> banyakPotong[i];

        jumlahHarga[i] = hargaSatuan[i] * banyakPotong[i];
    }

    cout << "\n==============================================================\n";
    cout << "                    GEROBAK FRIED CHICKEN\n";
    cout << "==============================================================\n";
    cout << left << setw(5) << "No"
         << setw(12) << "Jenis"
         << setw(12) << "Harga"
         << setw(10) << "Banyak"
         << "Jumlah Harga\n";
    cout << "--------------------------------------------------------------\n";

    int totalBayar = 0;
    for (int i = 0; i < banyakJenis; i++) {
        cout << left << setw(5) << i + 1;
        cout << setw(12) << namaJenis[i];
        cout << "Rp." << setw(8) << hargaSatuan[i];
        cout << setw(10) << banyakPotong[i];
        cout << "Rp." << jumlahHarga[i] << endl;

        totalBayar += jumlahHarga[i];
    }

    float pajak = totalBayar * 0.10;
    float totalAkhir = totalBayar + pajak;

    cout << "-----------------------------------------------\n";
    cout << "Jumlah Bayar\t: Rp. " << totalBayar << endl;
    cout << "Pajak 10%\t: Rp. " << pajak << endl;
    cout << "Total Bayar\t: Rp. " << totalAkhir << endl;
    cout << "-----------------------------------------------\n";

    return 0;
}

