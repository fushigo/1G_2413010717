/*
Judul Program	: Penghitung Besar Diskon Pembelian
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

int main () {
	int tot_pembelian, diskon;
	
	cout << "=====PROGRAM-PENGHITUNG-BESAR-DISKON-PEMBELIAN=====\n\n";
	cout << "Masukkan total pembelian : ";
	cin >> tot_pembelian;
	
	cout << endl;
	
	if(tot_pembelian > 100000) {
		diskon = tot_pembelian * 0.2;
	}else if (tot_pembelian >= 50000 && tot_pembelian < 100000) {
		diskon = tot_pembelian * 0.15;
	}else if (tot_pembelian >= 20000 && tot_pembelian < 50000) {
		diskon = tot_pembelian * 0.1;
	}else {
		diskon = 0;
	}
	
	cout << "Total Pembelian Anda\t\t: Rp." << formatNumber(tot_pembelian) << endl;
	cout << "Diskon Yang Anda Dapatkan\t: Rp." << formatNumber(diskon) << endl;
	cout << "Total Tagihan Anda\t\t: Rp." << formatNumber(tot_pembelian - diskon);
}
