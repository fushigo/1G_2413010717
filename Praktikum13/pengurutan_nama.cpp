#include <iostream>
#include <cstring>

using namespace std;

void sortName(char nama[][50], int n) {
	char temp[50];
	
	for(int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - 1; j++) {
			if(strcmp(nama[j], nama[j + 1]) > 0) {
				strcpy(temp, nama[j]);
				strcpy(nama[j], nama[j + 1]);
				strcpy(nama[j + 1], temp);
			}
		}
	}
}

int main() {
	int length;
	
	cout << "Masukkan jumlah data: ";
	cin >> length;
	cin.ignore();
	
	char nama[length][50];
	
	for(int i = 0; i < length; i++) {
		cout << "Masukkan nama ke- " << i + 1 << ": ";
		cin.getline(nama[i], 50);
	}
	
	sortName(nama, length);
	
	cout << "\nNama setelah diurutkan:\n";
	for(int i = 0; i < length; i++) {
		cout << nama[i] << endl;
	}
	
	return 0;
}
