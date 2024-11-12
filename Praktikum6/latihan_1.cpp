/*
Judul Program		: Mencetak bilangan genap (1-100) ascending
Authors				: Rizky Andika Sukma
*/

#include <iostream>
#include <windows.h>

using namespace std;

void handleColor(int val) {
	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, (val % 16 == 0 ? val % 16 + 1 : val % 16));
}

int main() {
	int index = 0, count = 0;
	
	while(index <= 100) {
		
		if (index % 2 == 0) {
			if(count == 5) {
				cout  << endl;
				count = 0;
			}
		
			handleColor(index);
			cout << index << " ";
			count ++;
		}
		
		index++;
		
		for(int i = 0; i < 100000000; i++){
		}
	}
	
	return 0;
}
