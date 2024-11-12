#include <iostream>
#include <stdio.h>

using namespace std;

//Fungsi Main
int main () {
	//Deklarasi Variable	
	float alas, tinggi, luas;
	char option;
	bool repeat;
	
	//Mengulang apabila repeat bernilai true, dengan perulangan do while	
	do {
		
		//Membersihkan terminal		
		system("cls");
		
		//Menampilkan Teks		
		printf("=====PROGRAM-MENGHITUNG-LUAS-SEIGITGA=====\n\n");
	
		//Input Alas Segitiga
		printf("Masukkan Alas Segitiga: ");
		cin >> alas;
		
		//Input TInggi Segitiga
		printf("Masukkan Tinggi Segitiga: ");
		cin >> tinggi;
		
		//Menghitung luas segitiga
		luas = 0.5 * alas * tinggi;
		
		cout << endl;
		
		//Menmpilkan hasil hitungan
		cout << "Luas segitiga dengan alas " << alas
		<< " dan tinggi " << tinggi << " adalah " << luas;
		
		cout << endl;
		cout << "=====================================================\n\n";
		
		//Menampilkan opsi
		printf("Ingin melanjutkan program? (Y/N) ");
		cin >> option;
		
		//Menggunakan operator kondisi untuk memberikan nilai di variable repeat, berdasarkan nilai option
		option == 'y' || option == 'Y' ? repeat = true : repeat = false;
		
	}while(repeat == true);
	
	return 0;
}
