#include <iostream>

using namespace std;

int a, b, result;


//Funssi Penjumlahan dengan pameter integer bil1, bil2;
int penjumlahan(int bil1, int bil2) {
	int hasil = bil1 + bil2; 
	
//	Mengembalikan nilai hasil
	return hasil;
}

//Fungsi Main
main () {
	cout << "Masukkan bilangan 1 : ";
	cin >> a;
	
	cout << "Masukkan bilangan 2 : ";
	cin >> b;
	
	result = penjumlahan(a, b);
	cout << "Hasil Pemjumlahan : " << result;
	
	return 0;
}
