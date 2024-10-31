/*
Nama Program	: Penghitung Gaji Karyawan
Dibuat Tanggal	: 27 Oktober 2024
Tujuan Program	: Menghitung total gaji karyawan
Authors			: Rizky Andika Sukma
*/

#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;

//	Deklarasi variable 
string nik, nm_karyawan, pendidikan, tgl_lahir, agama, jn_kelamin;
char selection;
int gj_pokok, tnj_keluarga, tnj_jabatan, tnj_transport, tl_gaji;
int jml_data, index = 0;

//Membuat object Karyawan
class Karyawan {
public:
	string nik;
	string nama;
	string tgl_lahir;
	string agama;
	string jn_kelamin;
	string pendidikan;
	int tl_gaji;
	
//	Default constructor
	Karyawan() {}
	
	Karyawan(string nik, string nama, string tgl_lahir, string agama, string jn_kelamin, string pendidikan, int tl_gaji){
		this -> nik = nik;
		this -> nama = nama;
		this -> tgl_lahir = tgl_lahir;
		this -> agama = agama;
		this -> jn_kelamin = jn_kelamin;
		this -> pendidikan = pendidikan;
		this -> tl_gaji = tl_gaji;
	} 
};

//Function createKaryawan
void createKaryawan () {
	printf("NIK karyawan : ");
	cin >> ws;
	getline(cin, nik);
		
	printf("Nama karyawan : ");
	getline(cin, nm_karyawan);
		
	printf("Tanggal lahir karyawan dengan format (dd/MM/YYYY) : ");
	getline(cin, tgl_lahir);
		
	printf("Agama karyawan : ");
	getline(cin, agama);
	
	printf("Pendidikan karyawan : ");
	getline(cin, pendidikan);
		
	printf("Pilih jenis kelamin karyawan dengan format (L/P):\n");
	printf("Laki-laki (L)\nPerempuan (P)\nPilihan: ");
	cin >> selection;
	cin.ignore();
	
	cout << endl;
		
	switch(selection) {
		case 'L' :
		case 'l' : 
			jn_kelamin = "Laki - laki";
		break;
			
		case 'P' :
		case 'p' : 
			jn_kelamin = "Perempuan";
		break;
			
		default : 
			jn_kelamin = "Tidak diketahui";
		break;
	}
}

//Function hitungGaji
void hitungGaji () {
	printf("Gaji pokok karyawan : ");
	cin >> gj_pokok;
	
	printf("Tunjangan keluarga karyawan : ");
	cin >> tnj_keluarga;
	
	printf("Tunjangan jabatan karyawan : ");
	cin >> tnj_jabatan;
	
	printf("Tunjangan transport karyawan : ");
	cin >> tnj_transport;
	
	//	Menghitung total gaji karyawan dengan rumus (gaji pokok + tunjangan keluarga + tunjangan jabatan + tunjangan transport)
	tl_gaji = gj_pokok + tnj_keluarga + tnj_jabatan + tnj_transport;
}

//function main
int main () {
	
	system("cls");
	
	printf("=====PROGRAM PENGHITUNG GAJI KARYAWAN=====\n");
	printf("Berapa jumlah data yang ingin dibuat : ");
	cin >> jml_data;
	
	cout << endl;
	
//	Memanggil object Karyawan
	Karyawan karyawanData[jml_data];
	
	do {
	
		printf("Data karyawan ke - %d \n", index + 1);
		createKaryawan();
		
		printf("Data gaji karyawan ke - %d (%s) \n", index + 1, nm_karyawan.c_str());
		hitungGaji();
		
		cout << endl;
		
//		Membuat data dari object karyawan
		karyawanData[index] = Karyawan(nik, nm_karyawan, tgl_lahir, agama, jn_kelamin, pendidikan,tl_gaji);
		
		index++;
		
	}while(index != jml_data);
	
//	Menampilkan data karyawan	
	printf("=====DATA FINAL KARYAWAN=====\n\n");
	
	for (int i = 0; i < jml_data; ++i) {
		cout << "Data karyawan " + karyawanData[i].nama + "-" + karyawanData[i].nik <<endl;
		cout << "NIK: " << karyawanData[i].nik << endl;
        cout << "Nama: " << karyawanData[i].nama << endl;
        cout << "Tanggal lahir: " << karyawanData[i].tgl_lahir << endl;
        cout << "Agama: " << karyawanData[i].agama << endl;
        cout << "Jenis kelamin: " << karyawanData[i].jn_kelamin << endl;
        cout << "Pendidikan: " << karyawanData[i].pendidikan;
        cout << "Total gaji: " << karyawanData[i].tl_gaji << endl;
        cout << "-------------------------\n" << endl;
    }
    
	getch();
	return 0;
}
