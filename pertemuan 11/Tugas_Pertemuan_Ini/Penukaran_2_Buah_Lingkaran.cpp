#include <iostream>
using namespace std;

void tukar(int *a, int *b) {
    int c;
    c = *a;
    *a = *b;
    *b = c;
}

int main() {
    int A, B;
    cout << "--------------------------------------------------------------" << endl;
    cout << "  Penukaran bilangan menggunakan Fungsi Implementasi Pointer  " << endl;
	cout << "--------------------------------------------------------------" << endl;
	cout << endl;
	
	
    cout << "Masukkan nilai A: ";
    cin >> A;
    cout << "Masukkan nilai B: ";
    cin >> B;

    cout << "\nSebelum ditukar:" << endl;
    cout << "A = " << A << endl;
    cout << "B = " << B << endl;

    tukar(&A, &B);

    cout << "\nSetelah ditukar:" << endl;
    cout << "A = " << A << endl;
    cout << "B = " << B << endl;

    return 0;
}

