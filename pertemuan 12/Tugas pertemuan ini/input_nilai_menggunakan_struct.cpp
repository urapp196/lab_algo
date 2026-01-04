#include <iostream>
using namespace std;

// Membuat struct
struct Mahasiswa {
    float tugas;
    float praktikum;
    float uts;
    float uas;
    float rata;
    char grade;
};

int main() {
    Mahasiswa m;

    // Input nilai
    cout << "================================\n";
    cout << "Masukkan nilai Tugas      : ";
    cin >> m.tugas;
    cout << "Masukkan nilai Praktikum  : ";
    cin >> m.praktikum;
    cout << "Masukkan nilai UTS        : ";
    cin >> m.uts;
    cout << "Masukkan nilai UAS        : ";
    cin >> m.uas;

    // Menghitung rata-rata
    m.rata = (m.tugas + m.praktikum + m.uts + m.uas) / 4;

    // Menentukan grade
    if (m.rata >= 90)
        m.grade = 'A';
    else if (m.rata >= 80)
        m.grade = 'B';
    else if (m.rata >= 70)
        m.grade = 'C';
    else if (m.rata >= 60)
        m.grade = 'D';
    else
        m.grade = 'E';

    // Output
    cout << "================================";
    cout << "\nRata-rata nilai : " << m.rata << endl;
    cout << "Nilai Huruf     : " << m.grade << endl;
    
     if (m.rata < 60)
        cout << "Maaf kamu tidak lulus";
    

    return 0;
}

