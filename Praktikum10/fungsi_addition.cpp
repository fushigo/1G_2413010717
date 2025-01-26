#include <iostream>
#include <conio.h>

using namespace std;

int addition (int a, int b) {
	int c;
	
	c = a + b;
	return (c);
}

int main() {
	int x = 5, y = 3;
	
	int hasil;
	
	hasil = addition(x, y);
	cout << "Hasil = " << hasil;
	getch();
	
	return 0;
}
