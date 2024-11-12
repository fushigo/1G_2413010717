#include <iostream>
#include <conio.h>

using namespace std;

int main () {
	int a = 5, b = 6, c = 7, d = 10;
	int hasil1, hasil2;
	float hasil3, hasil4, hasil5;
	
	hasil1 = a + b * c;
	hasil2 = a + b * c - d;
	hasil3 = a / b + c * d;
	hasil4 = ( a + b ) / c * d;
	hasil5 = a * b / c + d;
	
	cout << hasil1 << "\t";
	cout << hasil2 << "\t";
	cout << hasil3 << "\t";
	cout << hasil4 << "\t";
	cout << hasil5 << "\t";
	
	getch();
	return 0;
}
