#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string kalimat = "KAMPUS UNGU INSTITUT BISNIS DAN INFORMATIKA KESATUAN";

    
    for (int i = 0; i < kalimat.length(); i++) {
        kalimat[i] = tolower(kalimat[i]);
    }

    
    string dibalik = kalimat;
    reverse(dibalik.begin(), dibalik.end());

    cout << "Kalimat pengecilan huruf : " << kalimat << endl;
    cout << "Kalimat dibalik   : " << dibalik << endl;

    return 0;
}

