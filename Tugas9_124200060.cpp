#include <iostream>
using namespace std;
int main()

{
	int jumlah, max, min, selisih_max = 0, angka[jumlah], selisih[jumlah];
	float total=0, rtrt;
	
	cout << " Masukkan banyak angka : "; cin >> jumlah;
	
	for (int i=0; i<jumlah; i++) {
		cout << " Angka ke-" << i+1 << " : "; cin >> angka[i];
		total+= angka[i];
		 
		if (angka[i] > max) {
			max = angka[i];
		}
		if (angka[i] < min) {
			min = angka[i];
		}
		
		if (i>0) {
			if (angka[i] < angka[i-1]) {
			selisih[i] = angka[i-1]-angka[i];
			} 
			else {
			selisih[i] = angka[i]-angka[i-1];
			}
			if (selisih[i] > selisih_max) {
				selisih_max = selisih[i];
			}
		}
				
	}

	rtrt = total/jumlah;

	cout<<"\n \n ------Hasil------ \n";
	cout<<" Deret		: ";
		for(int i=0; i<jumlah; i++){
			cout << angka[i] << " ";
		}
	cout << "\n Maksimum	: " << max;
	cout << "\n Minimum	: " << min;
	cout << "\n Rata-rata	: " << rtrt;
	cout << "\n Selisih Maks	: " << selisih_max;
	

}
