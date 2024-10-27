# include <stdio.h>
# include <conio.h>
# include <iostream>

main() {
	int a, b, c = 0 ;
	
	system("cls");
	
	printf("Masukan Nilai A = ");
	scanf("%d",&a);
	
	printf("Masukan Nilai B = ");
	scanf("%d",&b);
	
	c = a + b;
	
	printf("Hasil Penjumlahan = %d",c);
	
	getch();
}
