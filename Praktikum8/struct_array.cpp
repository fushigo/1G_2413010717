#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main() {
	struct smhs{
		char nim[5];
		char nama[15];
		float nilai;
	};
	
	smhs mahasiswa[5];
	int a = 0;
	
	do {
		cout << "Data pada index ke - " << a << endl;
		cout << "=====================" << endl;
		
		cout << "Masukan NIM = ";
		cin>>mahasiswa[a].nim;
		
		cout << "Masukan Nama = ";
		cin>>mahasiswa[a].nama;
		
		cout << "Masukan Nilai = ";
		cin>>mahasiswa[a].nilai;
		
		cout << endl;
		a++;
	}while(a < 5);
	
	cout << " NIM Nama Nilai " << endl;
	cout << "============================" << endl;
	
	for(int b = 0; b < 5; b++) {
		cout << setw (7) << mahasiswa[b].nim;
		cout << setw (22) << mahasiswa[b].nama;
		cout << setw (5) << mahasiswa[b].nilai<<endl;
	}
	
	getch();
	return 0;
}
