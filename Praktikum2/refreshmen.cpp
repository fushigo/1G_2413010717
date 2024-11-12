/*
Nama program:		: Latihan01.cpp
Dibuat tanggal		: 21 Oktober 2024
Fungsi Program		: mencetak keterangan
Dibuat oleh			: Rizky Andika Sukma
*/

#include <iostream>
#include <cstdlib>
#include <conio.h>

using namespace std;

int main(){
	//Menampilkan data............
	system("clear");
	cout << "*******************************" << endl;
    cout << "*        Data Mahasiswa       *" << endl;
    cout << "*******************************" << endl;
	cout << "1. NIM\t\t: 0185442534364" <<endl;
	cout << "2. Nama\t\t: Anang Setiaji" <<endl;
	cout << "3. Alamat\t: Jl. Nuri 45 RT.01/RW.03\n";
	cout << "4. Kel.\t\t: Wonomulyo\n";
	cout << "4. Kec.\t\t: Candisari\n";
	cout << "4. Kota.\t: Semarang\n"; //cetak kota
	
	cout << "*******************************" << endl;
	
	getch();
	return 0;
}
