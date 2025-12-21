#include <iostream>
using namespace std;

void tambah (int *c, int *d);

int main()
{
	int a, b;
	a = 4;
	b = 6;
// clrscr();
	cout << "Nilai sebelum pemanggilan fungsi";
	cout << "\n = " << a << " b = " << b;
	tambah (&a, &b);
	cout << endl;
	cout << "\nNilai Setelah Pemanggilan Fungsi";
	cout << "\na = " << a << " b = " << b;
	return 0;
}

void tambah (int *c, int *d)
{
	*c += 7;
	*d += 5;
	cout << endl;
	cout << "\nNilai di akhir fungsi tambah()";
	cout << "\nc = " << *c << " d = " << *d;
}
