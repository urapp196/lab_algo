#include <iostream>
#include <string>
using namespace std;

struct Pegawai {
    string nama;
    string jabatan;
    long long gaji; 
};

int main()
{
    int jumlahPegawai;
    cout << "Masukkan jumlah pegawai: ";
    cin >> jumlahPegawai;

    Pegawai data[jumlahPegawai];

    for (int i = 0; i < jumlahPegawai; i++) {
        cout << "\nPegawai ke-" << i + 1 << endl;
        cout << "Nama    : ";
        cin >> data[i].nama;

        cout << "Jabatan : ";
        cin >> data[i].jabatan;

        cout << "Gaji  : ";
        cin >> data[i].gaji;
    }

    cout << "\n=== DATA PEGAWAI ===\n";
    for (int i = 0; i < jumlahPegawai; i++) {
        cout << "\nPegawai ke-" << i + 1 << endl;
        cout << "Nama    : " << data[i].nama << endl;
        cout << "Jabatan : " << data[i].jabatan << endl;
        cout << "Gaji    : Rp " << data[i].gaji << endl;
        
        if (data[i].gaji > 5000000){
        	cout << "Selamat gaji anda di atas UMR";
		}
		else{
			cout << "Gaji anda di bawah UMR";
		}
    }
	

    return 0;
}

