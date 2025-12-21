#include <iostream>
using namespace std;

void pangkat (int *a);

int main()
{
	int a;
	cout << "Fungsi berpangkat 3:" << endl;
	cout << "Masukan nilai:";
	cin >> a;
	
	return 0;
}
void pangkat (int *a)
{
	*a=(*a)*(*a)*(*a);
	cout << endl;
	cout << "Hasil:";
}
