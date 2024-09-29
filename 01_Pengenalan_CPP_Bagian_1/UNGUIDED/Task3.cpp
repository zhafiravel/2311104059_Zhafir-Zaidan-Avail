#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Masukkan nilai n: ";
    cin >> n;

    for (int i = n; i >= 1; i--) {
        // Cetak angka menurun
        for (int j = i; j >= 1; j--) {
            cout << j;
        }
        // Cetak tanda '*'
        cout << "*";
        // Cetak angka menaik
        for (int k = 1; k <= i; k++) {
            cout << k;
        }
        cout << endl;
    }

    // Cetak garis bawah
    for (int i = 1; i <= 2*n; i++) {
        cout << "-";
    }
    cout << endl;

    return 0;
}
