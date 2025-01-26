/*
Nama Program    : rekursi_bilangan_genap.cpp
Dibuat Tanggal  : 26 Januari 2025
Fungsi Program  : Mencetak bilangan genap menggunakan rekursi
Dibuat Oleh     : Rizky Andika Sukma
*/

#include <iostream>
using namespace std;

void cetakGenap(int n) {
    if (n > 100) {
        return;
    } else {
        cout << n << " ";
        cetakGenap(n + 2);
    }
}

int main() {
    cout << "Bilangan genap dari 0 hingga 100 adalah:" << endl;
    cetakGenap(0);
    cout << endl;
    return 0;
}

