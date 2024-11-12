#include <iostream>
#include <conio.h>

using namespace std;

int main() {
	int sewa;
	int jarak, hargabbm;
	int tempuhlt, total;
	float butuhbbm;
	
	cout << "Perhitungan Biaya Perjalanan \n";
	cout << "====================================== \n";
	cout << "1. Harga sewa per hari\t\t: "; cin >> sewa;
	cout << "2. Jarak Tujuan\t\t\t: "; cin >> jarak;
	cout << "3. Harga bbm perliter\t\t: "; cin >> hargabbm;
	cout << "4. Konsumsi BBM per liter\t: "; cin >> tempuhlt;
	//lakukan perhitungan..............................
	butuhbbm = jarak / tempuhlt;
	total = sewa + int(butuhbbm) + hargabbm;
	cout << "BBM dibutuhkan\t\t\t: " << butuhbbm << endl;
	cout << "================================= =============\n";
	cout << "Perkiraan Total Biaya\t\t: " << total << endl;
	
	getch();
	return 0;
}
