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
	int harga_barang, jl_barang, diskon, tl_beli, tagihan;
	
	cout << "=====PROGRAM-PENGHITUNGAN-PAKET-BARANG-&-DISKON=====\n" << endl;
	cout << "Masukkan harga per barang : ";
	cin >> harga_barang;
	cout << "Masukkan jumlah barang : ";
	cin >> jl_barang;
	
	tl_beli = harga_barang * jl_barang;
	
	if(jl_barang > 50) {
		diskon = 0.20 * tl_beli;
	}else if(jl_barang >= 20 && jl_barang <= 50) {
		diskon = 0.15 * tl_beli;
	}else if(jl_barang >= 10 && jl_barang <= 19) {
		diskon = 0.1 * tl_beli;
	}else {
		diskon = 0;
	}
	
	tagihan = tl_beli - diskon;
	
	cout << "-----------------------------------------\n";
	cout << "Harga per barang : Rp " << formatNumber(harga_barang) << endl;
	cout << "Jumlah barang : " << jl_barang << endl;
	cout << "Total harga awal : Rp " << formatNumber(tl_beli) << endl;
	cout << "Total diskon didapatkan : Rp " << formatNumber(diskon) << endl;
	cout << "Total ditagihkan : Rp " << formatNumber(tagihan) << endl;
	cout << "-----------------------------------------\n";
	
	return 0;
}
