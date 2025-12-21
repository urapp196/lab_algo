#include <iostream>
using namespace std;

int main()
{
	int a, b, c = 0, d = 0;
	
	cout << " MAsukan Nilai A:"; cin >> a;
	
	if (a >= 500.000)
	{
		cout << "selamat anda mendapatkan diskon 20%" << endl;
	}
	if (a >= 200.000)
	{
		cout << "selamat anda mendapatkan 10%" << endl;
	}
	else 
	{
		a < 200.000;
		cout << "tidak mendapatkan diskon";
	}

}
