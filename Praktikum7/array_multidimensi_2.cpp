#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int i, j;
    int data_jual[4][4];

    for (i = 1; i <= 3; i++) {
        for (j = 1; j <= 3; j++) {
            cout << "Data Ke - " << i << ", " << j << endl;
            cout << "Jumlah Penjualan: ";
            cin >> data_jual[i][j];
        }
    }

    cout << "\nData Penjualan Pertahun\n";
    cout << "-----------------------------------\n";
    cout << setw(4) << "NO" << setw(8) << "2008" << setw(8) << "2009" << setw(8) << "2010\n";
    cout << "-----------------------------------\n";

    for (i = 1; i <= 3; i++) {
        cout << setw(4) << i;
        for (j = 1; j <= 3; j++) {
            cout << setw(8) << data_jual[i][j];
        }
        cout << endl;
    }

    cout << "-----------------------------------\n";

    cin.get();
    cin.get();
    return 0;
}

