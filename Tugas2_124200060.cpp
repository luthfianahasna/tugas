#include <iostream>

using namespace std;
int main ()

{
int u_ayah,u_ibu,u_anak1,u_anak2,jumlah,a,b,c,d;

	cout<< " Masukkan usia masing-masing anggota keluarga."<<endl;
	cout<< " Usia Ayah		: ";
	cin>>u_ayah;
		if (u_ayah > 20) {
	a = 30000*30;
}
	else if (u_ayah > 12 && u_ayah <= 20) {
	a = 20000*30;	
}
	else if ( u_ayah <=  12 ) {
	a = 12000*30;	
}
	cout<<" Usia Ibu		: ";
	cin>>u_ibu;
	
	if (u_ibu > 20) {
	b = 30000*30;
}
	else if (u_ibu > 12 && u_ibu <= 20) {
	b = 20000*30;	
}
	else if ( u_ibu <=  12 ) {
	b = 12000*30;
}	
	cout<< " Usia Anak ke-1		: ";
	cin>>u_anak1;
		if (u_anak1 > 20) {
	c = 30000*30;
}
	else if (u_anak1 > 12 && u_anak1 <= 20) {
	c = 20000*30;	
}
	else if ( u_anak1 <=  12 ) {
	c = 12000*30;	
}
	cout<< " Usia Anak ke-2		: ";
	cin>>u_anak2;
	if (u_anak2 > 20) {
	d = 30000*30;
}
	else if (u_anak2 < 12 && u_anak2 <= 20) {
	d = 20000*30;	
}
	else if ( u_anak2 <=  12 ) {
	d = 12000*30;
}
	jumlah = a+b+c+d;
	cout<< " Total tagihan 1 bulan adalah Rp " <<jumlah<< ",-" <<endl;
	cout<< " Program selesai.";
}
