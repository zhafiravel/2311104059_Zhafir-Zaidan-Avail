#include <iostream>
using namespace std;

int main() {
    float bil1, bil2;

    cout << "Masukkan bilangan pertama: ";
    cin >> bil1;
    cout << "Masukkan bilangan kedua: ";
    cin >> bil2;

    //operasi aritmatika
    float penjumlahan = bil1 + bil2;
    float pengurangan = bil1 - bil2;
    float perkalian = bil1 * bil2;

    //Biar ga eror pas kena 0
    if (bil2 != 0) {
        float pembagian = bil1 / bil2;
        cout << "Hasil pembagian: " << pembagian << endl;
    } else {
        cout << "Tidak dapat membagi dengan nol" << endl;
    }

    // hasil
    cout << "Hasil penjumlahan: " << penjumlahan << endl;
    cout << "Hasil pengurangan: " << pengurangan << endl;
    cout << "Hasil perkalian: " << perkalian << endl;

    return 0;
}
