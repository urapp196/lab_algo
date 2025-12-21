
#include <iostream>
using namespace std;

int main()
{
    int totalData;
    
    cout << "Masukkan banyak nilai yang ingin diinput: ";
    cin >> totalData;
    
    int nilai[totalData];
    
    for (int i = 0; i < totalData; i++)
    {
        cout << "Masukkan nilai mahasiswa ke-" << i + 1 << ": ";
        cin >> nilai[i];
    }

    // Hitung total dan rata-rata
    double totalNilai = 0;
    for (int i = 0; i < totalData; i++)
    {
        totalNilai += nilai[i];
    }
    double rataRata = totalNilai / totalData;

    // Cari nilai terkecil dan terbesar
    int terkecil = nilai[0];
    int terbesar = nilai[0];
    for (int i = 1; i < totalData; i++)
    {
        if (nilai[i] < terkecil)
            terkecil = nilai[i];
        if (nilai[i] > terbesar)
            terbesar = nilai[i];
    }

    // Tampilkan hasil
    cout << "\n=== HASIL PERHITUNGAN ===" << endl;
    cout << "Total nilai : " << totalNilai << endl;
    cout << "Rata-rata   : " << rataRata << endl;
    cout << "Nilai terkecil : " << terkecil << endl;
    cout << "Nilai terbesar : " << terbesar << endl;

    // Tentukan kategori berdasarkan rata-rata
    if (rataRata < 60) {
        cout << "Kategori : Kurang" << endl;
    }
    else if (rataRata >= 60 && rataRata < 70) {
        cout << "Kategori : Cukup" << endl;
    }
    else if (rataRata >= 70 && rataRata <= 80) {
        cout << "Kategori : Baik" << endl;
    }
    else if (rataRata > 80 && rataRata <= 90) {
        cout << "Kategori : Sangat Baik" << endl;
    }
    else if (rataRata > 90) {
        cout << "Kategori : Istimewa" << endl;
    }

    return 0;
}


