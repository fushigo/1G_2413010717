/*
Nama Program    : Latihan10.cpp
Dibuat Tanggal  : 26 Januari 2025
Fungsi Program  : fungsi
Dibuat Oleh     : Rizky Andika Sukma
*/

#include <iostream>
#include <conio.h>
#include <cstring>

using namespace std;

struct skaryawan {
    int nik;
    char nama[20];
    int anak;
    int pendidikan;
};

int a = 0;
int gapok, tanak;
char ket[10];
skaryawan karyawan[5];

void fgapok();
int ftanak(int jmlanak);
int ftotal(int gapok, int tanak);
void cetakdata();

int main() {
    a = 0;
    while (a < 2) {
        cout << "NIK          : ";
        cin >> karyawan[a].nik;
        cout << "Nama         : ";
        cin >> karyawan[a].nama;
        cout << "Jumlah Anak  : ";
        cin >> karyawan[a].anak;
        cout << "Pendidikan (1=SD, 2=SMP, 3=SMA): ";
        cin >> karyawan[a].pendidikan;
        a++;
    }

    cetakdata();
    return 0;
}

void fgapok() {
    if (karyawan[a].pendidikan == 1) {
        gapok = 10000;
        strcpy(ket, "SD");
    } else if (karyawan[a].pendidikan == 2) {
        gapok = 20000;
        strcpy(ket, "SMP");
    } else {
        gapok = 30000;
        strcpy(ket, "SMA");
    }
}

int ftanak(int jmlanak) {
    if (jmlanak > 2) {
        tanak = 3 * 500;
    } else {
        tanak = jmlanak * 500;
    }
    return tanak;
}

int ftotal(int gapok, int tanak) {
    return gapok + tanak;
}

void cetakdata() {
    int total = 0;

    cout << "Laporan Pembayaran Gaji" << endl;
    cout << "==============================================" << endl;
    cout << "No\tNIK\tNama\tAnak\tPendidikan\tGaji Pokok\tT. Anak\tTotal" << endl;
    cout << "==============================================" << endl;

    for (a = 0; a < 2; a++) {
        fgapok();
        tanak = ftanak(karyawan[a].anak);
        total = ftotal(gapok, tanak);
        cout << (a + 1) << "\t"
             << karyawan[a].nik << "\t"
             << karyawan[a].nama << "\t"
             << karyawan[a].anak << "\t"
             << ket << "\t\t"
             << gapok << "\t\t"
             << tanak << "\t"
             << total << endl;
    }

    cout << "================================================" << endl;
    getch();
}
