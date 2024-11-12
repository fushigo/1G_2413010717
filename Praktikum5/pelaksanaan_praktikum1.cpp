#include <iostream>
#include <conio.h>

using namespace std;

char convertNumToChar(int n_angka) {
	if (n_angka >= 85 && n_angka <= 100) {
		return 'A';
	}else if (n_angka >= 70 && n_angka < 85 ) {
		return 'B';
	}else if (n_angka >= 60 && n_angka < 70) {
		return 'C';
	}else if (n_angka >= 45 && n_angka < 60) {
		return 'D';
	}else {
		return 'E';
	}
}

string convertCharToNum(char n_huruf) {
	
	string leading = "Kemungkinan niali kamu adalah ";
	
	switch(n_huruf) {
		case 'a':
		case 'A': {
			return leading + "85 - 100";
			break;
		}
		case 'b': 
		case 'B': {
			return leading + "70 - 84";
			break;
		}
		case 'c': 
		case 'C': {
			return leading + "60 - 69";
			break;
		}
		case 'd': 
		case 'D': {
			return leading + "45 - 59";
			break;
		}
		case 'e': 
		case 'E': {
			return leading + "0 - 44";
			break;
		}
	}
}

int main () {
	int nilai_ang, option;
	char nilai_hur, select;
	bool repeat = true;

	do {
		
		system("cls");
		
		cout << "Pilih menu" << endl;
		cout << "1. Konversi nilai angka ke huruf\n2. Konversi nilai huruf ke angka\n3. Keluar Program" << endl;
		cout << "Pilihan : ";
		cin >> option;
		
		cout << endl;
		
		switch(option) {
			case 1 : {
				cout << "=====Konversi-Nilai-Angka-Ke-Nilai-Huruf=====\n";
				cout << "Masukkan nilai angka : ";
				cin >> nilai_ang;
				
				char result = convertNumToChar(nilai_ang);
				
				cout << "Hasil konversi nilai " << nilai_ang << " adalah " << result;
				
				break;
			}
			
			case 2 : {
				cout << "=====Konversi-Nilai-Huruf-Ke-Nilai-Angka=====\n";
				cout << "Masukkan nilai huruf : ";
				cin >> nilai_hur;
				
				string result = convertCharToNum(nilai_hur);
				
				cout << result;
				
				break;
			}
			
			case 3 : {
				cout << "Keluar dari program";
				repeat = false;
				break;
			}
			
			default : {
				cout << "Menu tidak tersedia\n\n";
				break;
			}
		}
		
		cout << endl << endl;
		
		if (repeat) {
			cout << "Ingin mengulangi program? (Y/N) ";
			cin >> select;
			repeat = (select == 'Y' || select == 'y');
		}
		
	}while(repeat);
	
	return 0;
}
