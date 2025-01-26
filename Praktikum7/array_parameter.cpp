#include <iostream>
#include <conio.h>

using namespace std;

void printArray (int args[], int length) {
	for(int n = 0; n < length; n++) {
		cout << args[n] << " ";
		cout << "\n";
	}
}

int main() {
	int firstArray[] = {5, 10, 15};
	int secondArray[] = {2, 4, 6, 8, 10};
	
	printArray(firstArray, 3);
	printArray(secondArray, 5);
	
	getch();
	return 0;
}
