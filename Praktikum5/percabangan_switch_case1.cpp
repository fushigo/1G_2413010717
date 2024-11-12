#include<conio.h>
#include<iostream>

using namespace std;

main() {
	char kode;
	
	cout<<"Masukkan Kode Barang [A..C] : ";
	cin>>kode;
	
	switch(kode) {
		case 'A' :
		cout << "Alat Olah Raga";
		break;
		case 'B' :
		cout << "Alat Elelktronik";
		break;
		case 'C' :
		cout << "Alat Masak";
		break;
		default:
		cout << " Salah Memasukan kode";
		break;
	}
	
	getch();
}
