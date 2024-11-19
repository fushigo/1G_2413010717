#include <iostream>
#include <stdio.h>
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

int main () {
	int biaya_sks = 150000, biaya_smt = 500000;
	int smt, tl_sks;
	
	cout << "=====PROGRAM-PENGHITUNH-BIAYA-KULIAH=====\n" << endl;
	cout << "Jumlah SKS yang akan diambil : ";
	cin >> tl_sks;
	cout << "Semester saat ini : ";
	cin >> smt;
	
	cout << endl;
	
	cout << "----------------------------------\n";
	printf("Semester Saat Ini : %d", smt);
	cout << endl;
	printf("Jumlah SKS diambil : %d", tl_sks);
	cout << endl;
	printf("Biaya SKS per variable : Rp %s", formatNumber(biaya_sks).c_str());
	cout << endl;
	printf("Biaya tetap per semester : Rp %s", formatNumber(biaya_smt).c_str());
	cout << endl;
	printf("Total biaya ditagihkan : Rp %s", formatNumber(((biaya_sks * tl_sks) + biaya_smt)).c_str());
	
	return 0;
}
