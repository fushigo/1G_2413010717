#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    int i;
    string nama[5];
    float nilai1[5];
    float nilai2[5];
    float hasil[5];

    for (i = 0; i < 2; i++) {
        cout << "Data Ke-" << (i + 1) << endl;
        cout << "Nama Siswa: ";
        cin.ignore();
        getline(cin, nama[i]);
        cout << "Nilai Teori: ";
        cin >> nilai1[i];
        cout << "Nilai Praktek: ";
        cin >> nilai2[i];
        hasil[i] = (nilai1[i] * 0.40) + (nilai2[i] * 0.60);
        cout << endl;
    }

    cout << "========================================" << endl;
    cout << setw(4) << "No."
         << setw(20) << "Nama"
         << setw(10) << "Teori"
         << setw(10) << "Praktek"
         << setw(10) << "Hasil" << endl;
    cout << "========================================" << endl;

    for (i = 0; i < 2; i++) {
        cout << setw(4) << (i + 1)
             << setw(20) << nama[i]
             << setw(10) << fixed << setprecision(2) << nilai1[i]
             << setw(10) << fixed << setprecision(2) << nilai2[i]
             << setw(10) << fixed << setprecision(2) << hasil[i]
             << endl;
    }

    cout << "========================================" << endl;

    return 0;
}

