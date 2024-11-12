#include <stdio.h>
#include <conio.h>

int main () {
	int x;
	
	printf("Masukkan sebuah bilangan = ");
	scanf("%d", &x);
	
	if(x%2 != 0 ) {
		printf("Semarang kota Atlas");
	}
	
	getch();
	return 0;
}
