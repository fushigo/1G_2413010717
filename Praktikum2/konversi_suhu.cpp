#include <iostream>

using namespace std;

int main() {
	double inpSuhu, result;
	
	cout << "===== PROGRAM KOVERSI SUHU REAMUR KE CELCIUS=====\n" <<endl;
	cout << "Masukkan nilai suhu Reamur: ";
	cin >> inpSuhu;
	
	result = (inpSuhu / 4) * 5;
	
	cout << "Hasil konversi suhu: " << result << "*" << " Celcius" << endl;
	
	return 0;
}
