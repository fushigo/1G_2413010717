#include <iostream>

using namespace std;

int main() {
	string nama, nim,kls,alamat;
	
	cout << "Masukkan nama mahasiswa : ";
	getline(cin, nama);
	
	cout << "Masukkan NIM : ";
	cin >> nim;
	
	cout << "Masukkan kelas : ";
	cin >> kls;
	
	cout << "Masukkan alamat : ";
	cin >> alamat;
	
	cout << endl;
	
	cout << "------------------------------------\n";
	cout << "Nama mahasiswa : " << nama << endl;
	cout << "NIM : " << nim << endl;
	cout << "Kelas : " << kls << endl;
	cout << "Alamat : " << alamat << endl;
	cout << "------------------------------------\n";
	
	return 0;
}
