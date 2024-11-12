#include <iostream>
#include <conio.h>
#include <iostream>

using namespace std;

main() {
	int bil;
	system("cls");
	
	for(bil=1; bil<=10; ++bil){
		if (bil == 6) continue;
		cout << bil << endl;
	}
	
	getch();
}
