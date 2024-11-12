/*
Judul Program	: Penghitung Tunjangan Anak
Author			: Rizky Andika Sukma
*/

#include <iostream>
#include <sstream>

using namespace std;

string formatNumber(int value) {
	stringstream ss;
	string formattedNumber;
	
	ss << value;
	formattedNumber = ss.str();
	
	int numLength = formattedNumber.length();
	int distLength = 3;
	
	if(formattedNumber[1] != '.') {
		while(numLength > distLength) {
			formattedNumber.insert(numLength - distLength, 1, ',');
			distLength += 4;
			numLength ++;
		}
	}
	
	return formattedNumber;
}

int main() {
	int jml_anak, tn_anak = 50000;
	bool repeat = true;
	string leadingText = "Total tunjangan yang dibutuhkan Rp.";
	
	do {
		system("cls");
		
		cout << "\n=====PROGRAM-PENGHITUNG-TUNJANGAN-ANAK=====\n\n";
		cout << "Masukkan jumlah anak : ";
		cin >> jml_anak;
		
		if(jml_anak > 0 && jml_anak == 1) {
			cout << leadingText << formatNumber(tn_anak);
		}else if (jml_anak > 1) {
			tn_anak *= jml_anak;
			cout << leadingText << formatNumber(tn_anak);
		}else {
			cout << leadingText << "0";
		}
		
		char opt;
		cout << "\n---------------------------------------------\n\n";
		cout << "Ingin Mengulangi Program? (Y/N) ";
		cin >> opt;
		
		repeat = opt == 'y' || opt == 'Y' ? true : false;
		
	}while(repeat);
	
	return 0;
}
