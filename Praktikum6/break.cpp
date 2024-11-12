#include <iostream>
#include <conio.h>

using namespace std;

main() {
	int bil = 1;
	
	system("cls");
	
	do {
		if (bil >= 6)
		break;
		cout << bil << endl;
	} while(bil++);
	
	getch();
}
