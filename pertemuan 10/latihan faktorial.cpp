#include <iostream>
using namespace std;

int faktorial(int x) {
	
	int hasil = 1;
	for (int i=1; i<=x; i++){
		hasil *= i;
	} 
	return hasil;
}

int main()
{
	int a;
	
	cout << "masukan angka faktorial:";
	cin >> a;
	
	int hasil = faktorial(a);
	cout << "Hasil faktorial:\n" << hasil;
}
