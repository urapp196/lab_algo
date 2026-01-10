#include <iostream>
using namespace std;

void nilaivalidasi (int *nilai){
	if (*nilai < 0){
		*nilai = 0;
	} else if (*nilai > 100){
		*nilai = 100;
	}
}

int main()
{
	int nilai;
	cout << "Masukkan nilai angka: ";
	cin >> nilai;
	
	nilaivalidasi(&nilai);
	
	cout << "Nilai setelah di validasi: " << nilai << endl;
	
	return 0;
	
	
	
}
