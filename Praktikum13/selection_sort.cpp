#include <iostream>
#include <conio.h>

using namespace std;

int main() {
	int nilai[] = {5, 2, 4, 3, 1};
	int jdata = 5;
	int i, j, x;
	
	for(i = 0; i < jdata; i++) {
		cout << "\nTahap : " << (i+1) << "\n";
		cout << "====================================\n";
		
		for(j = i+1; j < jdata; j++) {
			if(nilai[i] > nilai[j]) {
				x = nilai[i];
				nilai[i] = nilai[j];
				nilai[j] = x;
			}
		}
		
		for(int a = 0; a < jdata; a++) {
			cout << nilai[a] << "\t";
		}
		
		cout << "\n";
	}
	
	getch();
	return 0;
}
