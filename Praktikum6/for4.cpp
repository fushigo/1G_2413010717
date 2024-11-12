#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <windows.h>

using namespace std;
 
void gotoxy(int x, int y) {
	printf("\033[%d;%dH", y, x);
}

void textcolor(int val) {
	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, val);
}

int main() {
	int a=2, b=1, c=2, d=1, e;
	
	system("cls");
	
	for(e=1; 17 > e; e++) {
		gotoxy(e, e);
		textcolor(e);
		printf("warna ke-%d", (e));
	}
	
	textcolor(4);
	printf("Dev C++");
	getch();
}
