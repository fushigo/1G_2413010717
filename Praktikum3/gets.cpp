# include <stdio.h>
# include <conio.h>
# include <iostream>

main() {
	char nm1[20];
	char nm2[20];
	
	system("cls");
	
	puts("Masukan nama ke - 1 = ");
	gets(nm1);
	
	printf("Masukan nama ke - 2 = ");
	scanf("%s",&nm2);
	
	printf("\n\n");
	puts("Suka ketemu dg Anda ..");
	
	puts(nm1);
	printf("Suka ketemu dg Anda ..%s", nm1);
	
	puts("Suka ketemu dg Anda ..");
	puts(nm1);
	
	printf("\n\n");
	puts("Suka ketemu dg Anda ..");
	
	puts(nm2);
	printf("Suka ketemu dg Anda ..%s", nm2);
}
