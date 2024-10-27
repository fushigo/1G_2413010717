# include <stdio.h>
# include <conio.h>
# include <iostream>
# include <iomanip>

using namespace std;

int main() {
	float a, b, c;
	a = 25.77;
	b = 23.45;
	c = a * b;
	
	system("cls");
	
	cout<<setiosflags(ios::fixed);
	cout<<setprecision(1)<<c<<endl;
	cout<<setprecision(2)<<c<<endl;
	cout<<setprecision(3)<<c<<endl;
	cout<<setprecision(4)<<c<<endl;
	
	getch();
}
