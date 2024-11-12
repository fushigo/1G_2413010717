#include<conio.h>
#include<iostream>

using namespace std;

main() {
	char kode;
	
	cout<<"Masukkan Kode Barang [A..C] : ";
	cin>>kode;
	
	switch(kode) {
		case 'A' :
		case 'a' :
			cout << "Alat Olah Raga";
		break;
		case 'B' :
		case 'b' :
			cout << "Alat Elelktronik";
		break;
		case 'C' :
		case 'c' :
			cout << "Alat Masak";
		break;
		default:
			cout << "Anda Salah Memasukan kode";
		break;
	}
	
	getch();
}
