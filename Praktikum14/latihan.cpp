#include <iostream>

using namespace std;

int linearSearch(string nama[], int n, string target) {
    for (int i = 0; i < n; i++) {
        if (nama[i] == target) {
            return i;
        }
    }
    return -1;
}

int main() {
    int n;
    cout << "Masukkan jumlah siswa: ";
    cin >> n;

    string nama[n];

    cout << "Masukkan nama siswa:\n";
    for (int i = 0; i < n; i++) {
        cout << "Siswa ke-" << i + 1 << ": ";
        cin >> nama[i];
    }

    string target;
    cout << "\nMasukkan nama yang ingin dicari: ";
    cin >> target;

    int result = linearSearch(nama, n, target);

    if (result != -1) {
        cout << "Nama \"" << target << "\" ditemukan pada indeks ke-" << result << " (posisi ke-" << result + 1 << ").\n";
    } else {
        cout << "Nama \"" << target << "\" tidak ditemukan dalam daftar.\n";
    }

    return 0;
}

