#include <iostream>
#include <conio.h>

#define PI 3.14159
#define NEWLINE '\n'

using namespace std;

int main() {
	double r=5.0;
	double circle;
	
	circle = 2 * PI * r;
	
	cout << circle;
	cout << NEWLINE;
	
	getch();
	return 0;
} 
