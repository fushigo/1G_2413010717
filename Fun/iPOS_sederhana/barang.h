#ifndef BARANG_H
#define BARANG_H

#include <iostream>

using namespace std;

class Barang {
	public:
		string nm_brng, kd_brng, category;
		int stock_brng, hrg_beli, hrg_jual;
		
		Barang() {}
		
		Barang(string kd_brng, string nm_brng, string category, int stock_brng, int hrg_beli, int hrg_jual) {
			this -> kd_brng = kd_brng;
			this -> nm_brng = nm_brng;
			this -> category = category;
			this -> stock_brng = stock_brng;
			this -> hrg_beli = hrg_beli;
			this -> hrg_jual = hrg_jual;
		}
};

#endif
