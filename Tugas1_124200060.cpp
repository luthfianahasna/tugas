#include <iostream>
using namespace std;
main ()

{
	char nama [30], nim [20];
	float uts,uas,na;
	cout << " Nama : ";
	cin >> nama;
	cout << " NIM : ";
	cin >> nim;
	cout << " Nilai UTS : ";
	cin >> uts;
	cout << " Nilai UAS : ";
	cin >> uas;
	
	na = (uts + uas)/2;
	
	cout << "\n Hai, nama saya " << nama << ",";
	cout << " NIM " << nim << ". \n";
	cout << " Nilai akhir saya " << na << ". Terima kasih.";

return 0;
}
