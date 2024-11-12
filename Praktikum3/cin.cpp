#include <iostream>
#include <conio.h>

using namespace std;

int main () {
	int i;
	
	cout << "Please enter an integer value: ";
	
	cin >> i;
	
	cout << "The value you entered is " << i;
	cout << " and its double is " << i*2 ;
	cout << ".\n";
	
	getch();
	return 0;
}
