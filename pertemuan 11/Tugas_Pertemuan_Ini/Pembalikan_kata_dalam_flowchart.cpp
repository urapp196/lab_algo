#include <iostream>
#include <string>
using namespace std;

int main() {
    string kalimat, hasil = "";
    int i;

    cout << "Masukkan kalimat: ";
    getline(cin, kalimat);

    i = kalimat.length() - 1;

    while (i >= 0) {
        hasil += kalimat[i];
        i = i - 1;
    }

    cout << "Hasil: " << hasil << endl;

    return 0;
}

