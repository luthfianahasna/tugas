#include <iostream>
using namespace std;
int main ()
{
	int pilih;
	cout << " Gambar bangun datar \n";
	cout << " 1. Kotak bolong \n 2. Segitiga \n";
	cout << " Pilih : ";
	cin >> pilih;
	
	switch (pilih) {
		case 1 :
		int p,l,a,b;
		cout << " Panjang	: ";
		cin >> p;
		cout << " Lebar		: ";
		cin >> l;
		for (a=1; a<=p; a++){
			cout << " ";
			for (b=1; b<=l; b++){
				if (a==1 || a==p || b==1 || b==l) {
					cout << "* ";
					}
				else {
					cout << "  ";
					}
			}
			cout << "\n";
		}
		break;
		
		case 2 :
		int h,i,j,x;
		cout << " Tinggi = "; 
		cin >> h;
		cout << "\n";
	
		for (i=1;i<=h;i++) {
			x = i;
			for (j=1;j<=i;j++) {
				cout << x <<" ";
				x=x+h-j;
				}
			cout << endl;
		}
		break;
		
	default : 
	cout << "Pilihan Anda salah!";
	}
}
