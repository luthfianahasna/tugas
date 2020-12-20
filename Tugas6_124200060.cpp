#include <iostream>
using namespace std;

void luas();
int keliling(int r);
void volume(int r);

float phi=3.14;

int main () {
	int r, pilih;
	char ulang;
	
	do { 
	cout << " Hitung Lingkaran \n";
	cout << " 1. Luas Lingkaran \n";
	cout << " 2. Keliling Lingkaran \n";
	cout << " 3. Volume Tabung \n";
	cout << " Pilih : "; cin >> pilih;
	cout << endl;
	
	
	if (pilih==1) {
		 luas();
	} else if (pilih==2) {
		keliling(r);
	} else if (pilih==3) {
		volume(r);
	} else {
		cout << " Input salah :( \n";
	}
	
	cout << endl;
	cout << " Ulangi program? (y/n) \n "; cin >>ulang;
	cout << endl;
		
	}
	
	while (ulang == 'Y' || ulang == 'y');
	cout << " Program selesai, Terima kasih :) \n";
	system("pause");
	return 0;
	
}


void luas() {
	int r;
	float L;
	cout << " Jari - jari	: "; cin >> r;
	
	L = phi*r*r;
	
	cout << "\n Luas lingkaran adalah " << L << endl;
}

int keliling(int r) {
	float K;
	cout << " Jari - jari	: "; cin >> r;
	
	K = 2*phi*r;
	
	cout << "\n Keliling lingkaran adalah " << K << endl;
	return (K);		
}

void volume(int r) {
	int t;
	float V;
	cout << " Jari - jari	: "; cin >> r;
	cout << " Tinggi		: "; cin >> t;
	
	V = phi*r*r*t;
	
	cout << "\n Volume tabung adalah " << V << endl;
}
