#include <iostream>
using namespace std;
int main ()

{
int pilih, jml=0, jmlh=1, m, n;

cout << " Pilih operasi : ";
cout << "\n 1. Perkalian \n 2. Perpangkatan \n";
cout << " Pilih : "; cin >> pilih;

switch(pilih){
	case 1 :
	cout << "Perkalian M x N \n";
	cout << "Nilai M = "; cin>>m;
	cout << "Nilai N = "; cin>>n;
	cout << m << " x " << n <<endl; 
	cout << m;
	for (int loop = 1; loop <=n; loop++){
		jml += m;
		if (loop != n){
		cout << " + " << m ;
	}
		else
		cout << " = " << jml;
		} 
	break;
	case 2 :
	cout << "Perpangkatan M ^ N \n";
	cout << "Nilai M = "; cin>>m;
	cout << "Nilai N = "; cin>>n;
	cout << m << " ^ " << n <<endl; 
	cout << m;
	for (int loop = 1; loop <=n; loop++){
		jmlh *= m;
		if (loop != n){
		cout << " x " << m ;
	}
		else
		cout << " = " << jmlh;
		} 
	break;
	default : cout<<"\n Input salah!";
	}
return 0;
}
