#include <conio.h>
#include <stdio.h>
#include <iostream>

int main() {
	int bil;
	
	system("cls");
	
	for(bil = 60; bil >= 10; bil++) {
		printf("%d", bil);
	}
	
	getch();
}
