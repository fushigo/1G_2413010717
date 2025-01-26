#include <iostream>

using namespace std;

int main() {
	string username, password;
	string inp_username, inp_password;
	
	username = "adika";
	password = "adika123";
	
	cout << "Masukkan username: ";
	cin >> inp_username;
	
	cout << "Masukkan password: ";
	cin >> inp_password;
	
	if(inp_username != username || inp_password != password) {
		cout<< "login gagal";
	}else {
		cout << "login berhasil";
	}
	
	return 0;
}
