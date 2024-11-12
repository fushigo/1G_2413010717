#include <iostream>
#include <conio.h>

using namespace std;

int main () {
	int a = 2, b=3, c =6;
	
	cout << (a == 5) << endl;
	cout << (a * b >= c) << endl;
	cout << (b + 4 > a * c) << endl;
	cout << ((b = 2) == a) << endl;
	
	getch();
	return 0;
}
