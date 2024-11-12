#include <iostream>
#include <conio.h>

using namespace std;

int main () {
	int bil = 2;
	
	system("cls");
	
	do {
		cout << bil << endl;
		bil += 2;
	}while(bil <= 10);
	
	getch();
	return 0;
}
