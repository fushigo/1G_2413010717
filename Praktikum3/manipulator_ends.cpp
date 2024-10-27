# include <stdio.h>
# include <conio.h>
# include <iostream>

using namespace std;

main() {
	int a, b, c, d;
	
	system("cls");
	
	cout<<"Masukan Nilai A : "; cin>>a;
	cout<<"Masukan Nilai B : "; cin>>b;
	
	c = a % b;
	d = a * b;
	
	cout<<"Hasil C = A % B adalah "<<c<<ends;
	cout<<"Hasil D = A * B adalah "<<d<<ends;
	
	getch();
}
