#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <windows.h>

void textattr(int val) {
	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, val);
}

int main() {
	int i;
	
	system("cls");
	
	for(i = 0; i < 20; i++) {
		textattr(i + ((i + 1) << 4));
		printf("Dev C++ \r\n");
	}
	
	getch();
}
