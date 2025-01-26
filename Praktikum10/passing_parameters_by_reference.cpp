#include <iostream>
#include <conio.h>

using namespace std;

void duplicate (int& a, int& b, int& c) {
	a *= 2;
	b *= 2;
	c *= 2;
}

int main () {
	int x = 2, y = 3, z = 5;
	
	duplicate(x, y, z);
	cout << "x = " << x << endl;
	cout << "y = " << y << endl;
	cout << "z = " << z << endl;
	
	getch();
	return 0;
}
