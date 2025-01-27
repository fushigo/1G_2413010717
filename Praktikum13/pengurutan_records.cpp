#include <iostream>

using namespace std;

struct Record {
	string nim;
	float nilai1;
	float nilai2;
};

void sortByNIM(Record records[], int n) {
	for(int i = 0; i < n - 1; i++) {
		for(int j = 0; j < n - 1 - i; j++) {
			if(records[j].nim > records[j + 1].nim) {
				Record temp = records[j];
				records[j] = records[j + 1];
				records[j + 1] = temp;
			}
		}
	}
}

void displayRecords(Record records[], int n) {
	cout << "NIM\tNilai1\tNilai2\n";
	cout << "===============================\n";
	for(int i = 0; i < n; i++) {
		cout << records[i].nim 
		<< "\t" << records[i].nilai1 
		<< "\t" << records[i].nilai2
		<< "\n";
	}
	cout << "===============================\n";
}

int main () {
	int n;
	cout << "Masukkan jumlah data: ";
	cin >> n;
	
	Record records[n];
	
	cout << "Masukkan data (NIM, Nilai1, Nilai2): \n";
	for(int i = 0; i < n; i++) {
		cout << "Data ke-" << i + 1 << ":\n";
		cout << "\tNIM: ";
		cin >> records[i].nim;
		cout << "\tNilai1: ";
		cin >> records[i].nilai1;
		cout << "\tNilai2: ";
		cin >> records[i].nilai2;
	}
	
	sortByNIM (records, n);
	
	cout << "\nData setelah dirutkan berdasarkan NIM:\n";
	displayRecords(records, n);
	
	return 0;
}
