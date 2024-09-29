#include <iostream>
#include <string>

using namespace std;

//Deklarasi Array
string satuan[] = {"", "satu", "dua", "tiga", "empat", "lima", "enam", "tujuh", "delapan", "sembilan"};
string puluhan[] = {"", "sepuluh", "dua puluh", "tiga puluh", "empat puluh", "lima puluh", "enam puluh", "tujuh puluh", "delapan puluh", "sembilan puluh"};

//fungsi angka to tulisan
string ubahKeTulisan(int angka) {
    if (angka == 0) {
        return "nol";
    } else if (angka < 10) {
        return satuan[angka];
    } else if (angka < 20) {
        return "belas";
    } else if (angka < 100) {
        return puluhan[angka / 10] + " " + satuan[angka % 10];
    } else {
        return "Angka di luar rentang 0-100";
    }
}

//fungsi utama
int main() {
    int angka;

    cout << "Masukkan angka (0-100): ";
    cin >> angka;

    if (angka >= 0 && angka <= 100) {
        string tulisan = ubahKeTulisan(angka);
        cout << angka << ": " << tulisan << endl;
    } else {
        cout << "Angka yang Anda masukkan tidak valid." << endl;
    }

    return 0;
}
