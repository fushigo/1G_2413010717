/*
Judul Program	: Seleksi Pegawai
Author			: Rizky Andika Sukma
*/

#include <iostream>
#include <conio.h>

using namespace std; 

class Pegawai {
public:
	string nama, nm_pendaftaran;
	int n_ujian_satu, n_ujian_dua;
	
	Pegawai() {}
	
	Pegawai (string nama, string nm_pendaftaran, int n_ujian_satu, int n_ujian_dua) {
		this -> nama = nama;
		this -> nm_pendaftaran = nm_pendaftaran;
		this -> n_ujian_satu = n_ujian_satu;
		this -> n_ujian_dua = n_ujian_dua;
	}
	
	void showData () {
		cout << "Nomor Pendaftaran : " << nm_pendaftaran << endl;
		cout << "Nama Pegawai : " << nama << endl;
		cout << "Nilai Ujian Satu : " << n_ujian_satu << endl;
		cout << "Nilai Ujian Dua : " << n_ujian_dua << endl;
	}
	 
};

Pegawai createPegawai (int idx) {
	string nama, nm_pendaftaran;
	int n_ujian_satu, n_ujian_dua;
	
	cout << "Masukkan Nomor Pendaftaran : ";
	cin >> nm_pendaftaran;
	
	cout << "Masukkan Nama Pegawai : ";
	cin >> nama;
	
	cout << "Masukkan Nilai Ujian Pertama : ";
	cin >> n_ujian_satu;
	
	cout << "Masukkan Nilai Ujian Kedua : ";
	cin >> n_ujian_dua;
	
	cout << endl << endl;
	
	return Pegawai(nama, nm_pendaftaran, n_ujian_satu, n_ujian_dua);
}

int main () {
	int select_menu, idx = 0;
	bool repeat = true;
	
	Pegawai pgwi[1000];
	
	do {
		system("cls");
		
		cout << "=====PROGRAM-SELEKSI-PEGAWAI=====\n" << endl;
		cout << "Silahkan memilih menu yang tersedia di bawah ini (Gunakan Nomor!)\n";
		cout << "1. Buat Data Pegawai\n"
		<< "2. Cek Pegawai Lulus\n"
		<< "3. Keluar Program\n";
		cout << "NOTES: Data Pegawai Yang Dapat Dibuat " << 1000 - idx << endl;
		
		cout << "Pilih Menu : ";
		cin >> select_menu;
		
		cout << endl << endl;
		
		cin.ignore();
		
		switch(select_menu) {
			case 1: {
				int jml_data, index = 0;
				char option;
				
				cout << "Ingin membuat banyak data? (Y/N) ";
				cin >> option;
				cout << endl;
				
				if (option == 'y' || option == 'Y') {
					cout << "Berapa Data Yang Ingin Dibuat : ";
					cin >> jml_data;
					
					cout << endl;
					
					while(index < jml_data){
						cout << "------MEMBUAT-DATA-PEGAWAI------\n\n";
						pgwi[idx] = createPegawai(idx);
						cin.ignore();
						index++;
						idx++;
					}
					
					cout << "Tekan Enter Untuk Melanjutkan...";
					getch();
					
				}else {
					cout << "------MEMBUAT-DATA-PEGAWAI------\n\n";
					cin.ignore();
					pgwi[idx] = createPegawai(idx);
					idx++;
					
					cout << "Tekan Enter Untuk Melanjutkan...";
					getch();
				}
				
				break;
			}
			
			case 2: {
				bool status = false;
				
				cout << "-----PEGAWAI-YANG-LULUS-----\n\n";
				
				for(int i = 0; i < idx; i++) {
					if(pgwi[i].n_ujian_satu >= 85 && pgwi[i].n_ujian_dua >= 85) {
						cout << "Pegawai ke - " << i+1 << endl;
						pgwi[i].showData();
						cout << "---------------------------------\n\n";
						status = true;
					}else {
						if(pgwi[i].n_ujian_satu >= 80 || pgwi[i].n_ujian_dua >= 80) {
							int rata = (pgwi[i].n_ujian_satu + pgwi[i].n_ujian_dua) / 2;
							
							if(rata >= 90) {
								cout << "Pegawai ke - " << i+1 << endl;
								pgwi[i].showData();
								cout << "---------------------------------\n\n";
								status = true;
							}
						}
					}
				}
				
				if (!status) {
					cout << "Tidak ada pegawai yang lulus seleksi";
					cout << endl << endl;
					
					cout << "Tekan Enter Untuk Melanjutkan...";
					getch();
				}else {
					cout << "Tekan Enter Untuk Melanjutkan...";
					getch();
				}
				
				break;
			}
			
			case 3: {
				repeat = false;
				cout << "Keluar dari Program...\n\n";
				cout << "Tekan Enter Untuk Melanjutkan...";
				getch();
				break;
			}
			
			default: {
				cout << "Menu tidak tersedia\n\n";
				cout << "Tekan Enter Untuk Melanjutkan...";
				getch();
				break;
			}
		}
		
	}while(repeat);
}
