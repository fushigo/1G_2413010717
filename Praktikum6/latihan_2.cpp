/*
Judul Program		: Mencetak bilangan ganjil (1-00) ascending
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
	int index = 1, count = 0;
	
	do {
		
		for(int i = 0; i < count; i++) {
			
			if(index > 99) break;
			
			cout << index << " ";
			index += 2;
		}
		
		handleColor(index);
		cout << endl;
		count++;
		
		for(int i = 0; i < 100000000; i++){
		}
		
	}while(index < 100);
	
	return 0;
}
