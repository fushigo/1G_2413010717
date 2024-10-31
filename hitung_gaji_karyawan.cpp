/*
Judul Program	: Penghitung Gaji Karyawan
Author			: Rizky Andika Sukma
*/

#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

//Membuat class Karyawan
class Karyawan {
//	Deklarasi attribut class Karyawan
	public: 
		string nik, nama, tgl_lahir, jn_kelamin, agama, pendidikan;
		int id, tl_gaji;
	
//	Membuat default constructor	
	Karyawan(){};
	
//	Membuat constructor dengan parameter
	Karyawan(string nik, string nama, string tgl_lahir, string agama, string jn_kelamin, string pendidikan, int tl_gaji, int id) {
		this -> nik = nik;
		this -> nama = nama;
		this -> tgl_lahir = tgl_lahir;
		this -> agama = agama;
		this -> jn_kelamin = jn_kelamin;
		this -> pendidikan = pendidikan;
		this -> tl_gaji = tl_gaji;
		this -> id = id;
	}
	
//	Fungsi menmapilkan data
	void showData() {
		printf("NIK Karyawan: %s\n", nik.c_str());
		printf("Nama Karyawan: %s\n", nama.c_str());
		printf("Tanggal Lahir Karyawan (DD/MM//YY): %s\n", tgl_lahir.c_str());
		printf("Jenis Kelamin Karyawan: %s\n", jn_kelamin.c_str());
		printf("Total Gaji Karyawan: %d\n", tl_gaji);
		
		cout << endl;
	}
};

//Fungsi untuk membuat data karyawan
Karyawan createKaryawan(int idx) {
	string nik, nama, tgl_lahir, jn_kelamin, agama, pendidikan;
	int gj_pokok, tn_keluarga, tn_jabatan, tn_transport, tl_gaji;
	char jnk_option;
	
	printf("NIK Karyawan: ");
	getline(cin, nik);
	
	printf("Nama Karyawan: ");
	getline(cin, nama);
	
	printf("Tanggal Lahir Karyawan (DD/MM//YY): ");
	getline(cin, tgl_lahir);
	
	printf("Pilih Jenis Kelamin Karyawan (Gunakan Format L/P)\n");
	printf("1. Laki-laki (L)\n2. Perempuan (P)\n");
	printf("Pilih: ");
	cin >> jnk_option;
	cin.ignore();
	
	switch(jnk_option) {
		case 'l':
		case 'L': {
			jn_kelamin = "Laki-laki";
			break;
		}
		case 'p':
		case 'P': {
			jn_kelamin = "Perempuan";
			break;
		}
		default :{
			printf("Opsi tidak tersedia!");
			return createKaryawan(idx);
		}
	};
	
	printf("Agama Karyawan: ");
	getline(cin, agama);
	
	printf("Pendidikan Karyawan: ");
	getline(cin, pendidikan);
	
	cout << endl;
	
	printf("------Input-Daftar-Gaji Karyawan------\n\n");
	
	printf("Gaji Pokok Karyawan: ");
	cin >> gj_pokok;
	
	printf("Tunjangan Keluarga Karyawan: ");
	cin >> tn_keluarga;
	
	printf("Tunjangan Jabatan Karyawan: ");
	cin >> tn_jabatan;
	
	printf("Tunjangan Transport Karyawan: ");
	cin >> tn_transport;
	
	cout << endl << endl;
	
	tl_gaji = gj_pokok + tn_keluarga + tn_jabatan + tn_transport;
	
	return Karyawan(nik, nama, tgl_lahir, agama, jn_kelamin, pendidikan, tl_gaji, idx);
	
	cin.ignore();
}

int main() {
	int slc_menu, idx = 0;
	char opt_menu;
	bool repeat = true;
	
	Karyawan kryn[1000];
	
	do {
		
		printf("=======PROGRAM PENGHITUNG GAJI KARYAWAN=======\n\n");
		printf("Silahkan memilih menu yang tersedia di bawah ini (Gunakan Nomor!)\n");
		printf("1. Buat Data Karyawan\n2. Rubah Data Karyawan\n3. Tampilkan Seluruh Data Karyawan\n4. Keluar Program\n");
		printf("NOTE: Data maksimal yang bisa dibuat / disimpan adalah 1000\n");
		
		printf("Pilih opsi : ");
		cin >> slc_menu;
		
		cout << endl << endl;
		
		switch(slc_menu) {
			case 1 : {
				int jml_data, index = 0;
				printf("Ingin langsung membuat beberapa data? (Y/N)");
				cin >> opt_menu;
				
				if(opt_menu == 'Y' || opt_menu == 'y') {
					printf("Berapa data yang ingin dibuat: ");
					cin >> jml_data;
					
					cin.ignore();
					
					cout << endl << endl;
					
					while (index < jml_data) {
						printf("------MEMBUAT-DATA-KARWAYAN------\n\n");
						kryn[idx] = createKaryawan(idx);
						cin.ignore();
						index++;
						idx ++;
					}
					
				}else {
					cin.ignore();
					kryn[idx] = createKaryawan(idx);
					idx ++;
				}
				
				break;
			}
			case 2 : {
				int select_id;
				printf("======MENGUBAH-DATA-KARYAWAN======\n");
				
				if(idx == 0) {
					printf("Tidak ada data karyawan.\n\n\n");
				}else{
					for(int i = 0; i < idx; i++) {
						printf("ID KARYAWAN %d | %s \n", kryn[i].id, kryn[i].nik.c_str());
					};
					
					cout << endl;
					
					printf("Pilih karyawan berdasarkan Id Karyawan: ");
					cin >> select_id;
					cin.ignore();
					
					if (select_id > idx) {
						printf("ID Karyawan tidak ditemukan\n\n");
					}else {
						printf("------MENGUBAH-DATA-KARWAYAN------\n\n");
						kryn[select_id] = createKaryawan(select_id);
					};
				};
				
				break;
			}
			case 3 : {
				
				printf("======MENAMPILKAN-DATA-KARYAWAN======\n");
				printf("Total Data: %d\n\n", idx);
				
				if(idx == 0) {
					printf("Tidak ada data karyawan.\n\n\n");
				}else {
					for (int i = 0; i < idx; i++) {
						printf("ID KARYAWAN %d\n\n", kryn[i].id);
						kryn[i].showData();
					}
				}
				break;
			}
			case 4 : {
				printf("Keluar dari program...");
				repeat = false;
				break;
			}
			default :
				printf("Menu tidak tersedia!");
		}
		
	}while(repeat == true);
	
	return 0;
}


