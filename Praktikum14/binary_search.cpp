#include <iostream>
#include <conio.h>

using namespace std;

int binnarySearch(int [], int, int);

int main () {
	const int jmldata = 10;
	int data[jmldata] = {1, 2, 45, 56, 68, 93, 94, 95, 98};
	int cari, lokasi;
	
	cout << "Data yang dicari : ";
	cin >> cari;
	
	lokasi = binnarySearch(data, jmldata, cari);
	
	if (lokasi > -1) {
		cout << "Data yang dicari ditemukan pada lokasi : "
		<< lokasi << "\n";
	}else {
		cout << "Data yang dicari tidak ditemukan! \n";
	}
	
	getch();
	return 0;
}

int binnarySearch(int list[], int jumlah, int vcari) {
	int kiri, kanan, tengah;
	
	kiri = 0;
	kanan = jumlah - 1;
	
	while (kiri <= kanan) {
		tengah = (int) ((kiri + kanan) / 2);
		
		if(vcari == list[tengah]) {
			return tengah;
		}else if(vcari > list[tengah]) {
			kiri = tengah + 1;
		}else {
			kanan = tengah - 1;
		}
	}
	
	return -1;
}
