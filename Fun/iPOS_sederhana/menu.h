#ifndef MENU_H
#define MENU_H

#include <iostream>

using namespace std;

class Menu {
	public:
		void mainMenu () {
			cout << "=====PROGRAM-IPOS-SEDERHANA=====\n\n";
			cout << "Menu Yang Tersedia : \n" 
			<< "1. Input Barang\n"
			<< "2. Kasir\n"
			<< "3. Cek Stock Barang\n"
			<< "4. Exit\n";
			cout << "Pilih menu : ";
		};
};

#endif
