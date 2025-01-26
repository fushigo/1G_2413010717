#include <iostream>
using namespace std;

int hitungNilai(int n) {
    if (n == 1) {
        return 1;
    } else {
        return n + hitungNilai(n - 1);
    }
}

int main() {
    int hasil = hitungNilai(999);
    cout << "Jumlah nilai dari 1 hingga 999 adalah: " << hasil << endl;
    return 0;
}

