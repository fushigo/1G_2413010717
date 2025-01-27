#include <iostream>

using namespace std;

struct Record {
	string noPelanggan;
	string golongan;
	float meterLalu;
	float meterSekarang;
};

void sortNoPelanggan(Record records[], int n) {
	for(int i = 0; i < n - 1; i++) {
		for(int j = 0; j < n - 1 - i; j++) {
			if(records[j].noPelanggan > records[j + 1].noPelanggan) {
				Record temp = records[j];
				records[j] = records[j + 1];
				records[j + 1] = temp;
			}
		}
	}
}

void displayRecords(Record records[], int n) {
	cout << "Nomor Pelanggan\tGolongan\tMeter Lalu\tMeter Sekarang\n";
	cout << "===============================\n";
	for(int i = 0; i < n; i++) {
		cout << records[i].noPelanggan 
		<< "\t" << records[i].golongan 
		<< "\t" << records[i].meterLalu
		<< "\t" << records[i].meterSekarang
		<< "\n";
	}
	cout << "===============================\n";
}

int main () {
	int n;
	cout << "Masukkan jumlah data: ";
	cin >> n;
	
	Record records[n];
	
	cout << "Masukkan data (Nomor Pelanggan, Golongan, Meter Lalu, Meter Sekarang): \n";
	for(int i = 0; i < n; i++) {
		cout << "Data ke-" << i + 1 << ":\n";
		cout << "\tNomor Pelanggan: ";
		cin >> records[i].noPelanggan;
		cout << "\tGolongan: ";
		cin >> records[i].golongan;
		cout << "\tMeter Lalu: ";
		cin >> records[i].meterLalu;
		cout << "\tMeter Sekarang: ";
		cin >> records[i].meterSekarang;
	}
	
	sortNoPelanggan (records, n);
	
	cout << "\nData setelah dirutkan berdasarkan Nomor Pelanggan:\n";
	displayRecords(records, n);
	
	return 0;
}
