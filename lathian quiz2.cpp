#include <iostream>
using namespace std;

int main()
{
    int bakteri = 15; // jumlah awal bakteri
    int menit = 15;   // lama simulasi dalam menit

    cout << "Simulasi Perkembangbiakan Bakteri" << endl;
    cout << "Jumlah awal bakteri: " << bakteri << endl;
    cout << "======================================" << endl;

    for (int i = 1; i <= menit; i++)
    {
        bakteri = bakteri * 2; // setiap menit jumlah bakteri menjadi dua kali lipat
        cout << "Menit ke-" << i << " : " << bakteri << " bakteri" << endl;
    }

    cout << "======================================" << endl;
    cout << "Jumlah bakteri pada menit ke-" << menit << " adalah " << bakteri << " bakteri." << endl;

    return 0;
}

