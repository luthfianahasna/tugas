#include <iostream>
#include <string>
using namespace std;
int main ()

{
	string username,pw;
	int nilai,na1,na2,na3,nk1,nk2,nk3,a,b;
	cout<<"========= Login Akun ========= \n";
	cout<<"Username	: ";
	cin>>username;
	cout<<"Password	: ";
	cin>>pw;
	cout<<"============================== \n \n";
		
	if (username=="hasn" && pw=="1234"){
	cout<<"Login berhasil! \n \n";
	cout<<"Input nilai mata kuliah \n";
	cout<<"1. Algoritma dan Pemrograman \n";
	cout<<"2. Kalkulus \n";
	cout<<"Pilih mata kuliah : ";
	cin>>nilai;
	switch (nilai) {
	case 1 : 
	cout<<"Nilai Harian	: ";
	cin>>na1;
	cout<<"Nilai UTS	: ";
	cin>>na2;
	cout<<"Nilai UAS	: ";
	cin>>na3;
	a = (na1+na2+na3)/3;
	if (a>=80) {
		cout<<"Anda lulus mata kuliah Algoritma dan Pemrograman dengan nilai "<<a;
	}
		else 
		cout<<"Anda lulus mata kuliah Algoritma dan Pemrograman dengan nilai "<<a;	
	break;
	
	case 2 :
	cout<<"Nilai Harian	: ";
	cin>>nk1;
	cout<<"Nilai UTS	: ";
	cin>>nk2;
	cout<<"Nilai UAS	: ";
	cin>>nk3;
	b = (nk1+nk2+nk3)/3;
	if (b>=80) {
		cout<<"Anda lulus mata kuliah Kalkulus dengan nilai "<<b;
	}
		else 
		cout<<"Anda lulus mata kuliah Kalkulus dengan nilai "<<b;	
	break;
	
	default : cout<<"Input salah!";
	}
	}
	
	else if (pw=="1234") {
	cout<<"Username tidak terdaftar!";
	} 
	
	else if (username=="hasn") {
	cout<<"Password salah!";
	}
	
	else
	cout<<"Username dan password salah!";

}

