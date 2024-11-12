#include <iostream>
#include <conio.h>
#include "barang.h"
#include "menu.h"

using namespace std;

Barang createBarang() {
	string kd_brng, nm_brng, category;
	int stock_brng, hrg_beli, hrg_jual;
	
	cout << "Kode barang: ";
	getline(cin, kd_brng);
	
	cout << "Nama barang: ";
	getline(cin, nm_brng);
	
	cout << "Kategori barang: ";
	getline(cin, category);
	
	cout << "Stock barang: ";
	cin >> stock_brng;
	
	cout << "Harga beli barang: ";
	cin >> hrg_beli;
	
	cout << "Harga jual barang: ";
	cin >> hrg_jual;
	
	cin.ignore();
	
	return Barang(kd_brng, nm_brng, category, stock_brng, hrg_beli, hrg_jual);
}

int main(int argc, char** argv) {
	int menu, idx = 0;
	bool repeat = true;
	Menu mnu;
	Barang brng[1000];
	
	do {
		
		system("cls");
		cout << endl;
		mnu.mainMenu();
		cin >> menu;
		
		cout << endl << endl;
		cin.ignore();
		
//		Menu Handler
		switch(menu) {
			case 1: {
				int jm_data, index = 0;
				char opt;
				
				cout << "Ingin membuat banyak data? (Y/N) ";
				cin >> opt;
				
				cin.ignore();
				
				cout << endl;
				
				if(opt == 'y' || opt == 'Y') {
					cout << "Banyak barang yang ingin dibuat: ";
					cin >> jm_data;
					cin.ignore();
					cout << endl;
					
					while(index < jm_data){
						cout << "\n\n-----INPUT-BARANG-----\n\n";
						brng[idx] = createBarang();
						idx++;
						index++;
					}
				}
				
				break;
			}
			
			case 3: {
				if (idx == 0 || idx > 0) {
                    cout << "Stock Semua Barang Kosong!\n" << endl;
                } else {
                	int tlj_barang = 0, stc_barang = 0;
                	
                	for (int i = 0; i < idx; i++) {
                        tlj_barang ++;
                        
                        if(brng[i].stock_brng > 0) {
                        	stc_barang += brng[i].stock_brng;
						}
                    }
                	
                	cout << "Total jenis barang : " << tlj_barang << endl;
                	cout << "Total stock semua barang : " << stc_barang << endl;
                	cout << endl;
                	
                	cout << "---------------------------------------------------\n";
                	for (int i = 0; i < idx; i++) {
                        cout << brng[i].kd_brng << " | " << brng[i].nm_brng "\t\t : " << brng[i].stock_brng << endl;
                    }
                    cout << "----------------------------------------------------\n";
                	
                }
				break;
			}
			
			default: {
				cout << "Menu Tidak Tersedia!\n" << endl;
				break;
			}
		}
		
		cout << "Tekan Enter Untuk Melanjutkan...";
		getch();
		
	}while(repeat);
	
	return 0;
}
