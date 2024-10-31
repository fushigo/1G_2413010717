#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;

int main() {
	string nik, nm_karyawan, pendidikan, jn_kelamin, agama, tgl_lahir;
	int gj_pokok, tn_keluarga, tn_jabatan, tn_transport;
	
	printf("=====PROGRAM MENGHITUNG GAJI KARYAWAN=====\n");
	
	printf("NIK Karyawan : ");
	cin >> ws;
	cin >> nm_karyawan;
	
	printf("Nama Karyawan : ");
	cin >> nm_karyawan;
	
	printf("Pendidikan Karyawan : ");
	cin >> pendidikan;
	
	printf("Jenis Kelamin : ");
	cin >> jn_kelamin;
	
	printf("Agama Karyawan : ");
	cin >> agama;
	
	printf("Tanggal Lahir Karyawan : ");
	cin >> tgl_lahir;
	
	printf("Gaji Pokok : ");
	cin >> gj_pokok;
	
	printf("Tunjangan Keluarga : ");
	cin >> tn_keluarga;
	
	printf("Tunjangan Jabaran : ");
	cin >> tn_jabatan;
	
	printf("Tunjangan Transport : ");
	cin >> tn_transport;
	
	cin.ignore();
	
	cout << endl;
	
	printf("=====HASIL MENGHITUNG TOTAL GAJI KARYAWAN=====\n");
	printf("NIK Karyawan: %S\n", nik.c_str());
	printf("Nama Karayawan: %s\n", nm_karyawan.c_str());
	printf("Pendidikan Karayawan: %s\n", pendidikan.c_str());
	printf("Jenis Kelamin Karayawan: %s\n", jn_kelamin.c_str());
	printf("Agama Karayawan: %s\n", agama.c_str());
	printf("Tanggal Lahir Karayawan: %s\n", tgl_lahir.c_str());
	printf("Total Gaji Karayawan: %d\n", gj_pokok + tn_keluarga + tn_jabatan + tn_transport);
	
	return 0;
}
