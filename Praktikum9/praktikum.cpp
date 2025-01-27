#include <iostream>
#include <conio.h>

using namespace std;
// Variable Global
int a = 2;

void satu() {
	int b;		// Variable lokal
	
	b = 5;
	a = a * b;
	
	cout << "Nilai a : " << a << endl;
	cout << "Nilai b : " << b << endl;
}

int main() {
	int b = 3, c = 4; 		// Variable Local
	
	cout << "Nilai a : " << a << endl;
	cout << "Nilai b : " << b << endl;
	cout << "Nilai c : " << c << endl;
	
	satu();
	
	cout << "Nilai a : " << a << endl;
	cout << "Nilai b : " << b << endl;
	cout << "Nilai c : " << c << endl;
	
	getch();
	return 0;
}
