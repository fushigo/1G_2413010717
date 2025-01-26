#include <iostream>

using namespace std;

void generateHeader() {
    cout << "Daftar Harga BBM" << endl;
    cout << "=================================================================" << endl;
    cout << "Liter\tPremium\t\tPertamax 92\tPrimaDex\tBio Solar" << endl;
    cout << "=================================================================" << endl;
}

int main() {
    int hargaAwal = 8000;

    generateHeader();

    for (int i = 0; i < 5; i++) {
        cout << i + 1 << "\t";
        int harga = hargaAwal;

        for (int j = 0; j < 4; j++) {
        	cout << harga * (i + 1) << "\t\t";
        	harga += 2000;
        }
        cout << endl;
    }
    
    cout << "=================================================================" << endl;

    return 0;
}

