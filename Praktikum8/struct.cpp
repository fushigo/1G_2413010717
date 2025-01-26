#include <iostream>
#include <conio.h>

using namespace std;

int main() {
	struct {
		char nim[5];
		char nama[15];
		float nilai;
	} mahasiswa;
	
	cout << "Masukkan NIM	= "; cin >> mahasiswa.nim;
	cout << "Masukkan Nama	= "; cin >> mahasiswa.nama;
	cout << "Masukkan Nilai	= "; cin >> mahasiswa.nilai;
	
	cout << "NIM	= " << mahasiswa.nim << endl;
	cout << "Nama	= " << mahasiswa.nama << endl;
	cout << "Nilai	= " << mahasiswa.nilai << endl;
	
	getch();
	return 0;
}
