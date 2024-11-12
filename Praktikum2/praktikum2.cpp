/*
Nama Program		: Latihan02.cpp
Dibuat tanggal		: 21 Oktober 2024
Fungsi Program		: menggunakan variable
Dibuat oleh			: Rizky Andika Sukma
*/

#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <cstring>

using namespace std;

char nama[30];
char alamat[30];

int main() {
	system("clear");
	strcpy(nama, "Rizky Andika Sukma");
	strcpy(alamat, "Jl. Samudra Pasai");
	int nilai1 = 85;
	int nilai2 = 90;
	
//	cetak data
cout << "Data Mahasiswa" << endl;
cout << "=============================" << endl;
cout << "1. Nama\t\t: " << nama << endl;
cout << "2. Alamat\t: " << alamat << endl;
cout << "3. Nilai1\t: " << nilai1 << endl;
cout << "4. Nilai2\t: " << nilai2 << endl;
float rata = (nilai1 + nilai2)/2;
cout << "5. Rata-rata\t: " << rata << endl;
cout << "=============================" << endl;

getch();
return 0;
}
