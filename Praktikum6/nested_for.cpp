#include <stdio.h>
#include <conio.h>
#include <iostream>

using namespace std;

int main() {
	int a, b;
	
	system("cls");
	
	for(a= 1; a <= 5; a++) {
		printf("\n");
		for(b = a; b <= 5; b++) {
			printf(" %d", a);
		}
	}
	
	getch();
}
