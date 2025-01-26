#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

char generateGrade(float n_angka) {
	if (n_angka >= 85 && n_angka <= 100) {
		return 'A';
	}else if (n_angka >= 70 && n_angka < 85 ) {
		return 'B';
	}else if (n_angka >= 60 && n_angka < 70) {
		return 'C';
	}else if (n_angka >= 45 && n_angka < 60) {
		return 'D';
	}else {
		return 'E';
	}
}

int main() {
	struct smhs{
		char nim[5];
		char nama[15];
		float nilai;
	};
	
	smhs mahasiswa[2];
	int a = 0;
	
	do {
		cout << "Data pada index ke - " << a << endl;
		cout << "======================" << endl;
		
		cout << "Masukkan NIM	= ";
		cin >> mahasiswa[a].nim;
		
		cout << "Masukkan Nama	= ";
		cin >> mahasiswa[a].nama;
		
		cout << "Masukkan Nilai	= ";
		cin >> mahasiswa[a].nilai;
		
		cout << endl;
		a++;
	}while(a < 2);
	
	cout << "	NIM 	Nama 	Nilai 	Grade" << endl;
	cout << "================================" << endl;
	
	for(int b = 0; b < 2; b++) {
		cout << setw (2) << mahasiswa[b].nim;
		cout << setw (7) << mahasiswa[b].nama;
		cout << setw (5) << mahasiswa[b].nilai;
		cout << setw (5) << generateGrade(mahasiswa[b].nilai) << endl;
	}
	
	getch();
	return 0;
}
