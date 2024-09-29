#include <iostream>

using namespace std;

int main() {
    string nama;
    int NIM;

    cout << "Siapa nama anda? ";
    cin >> nama;
    cout << "Berapa NIM anda? ";
    cin >> NIM;

    cout << "Halo, " << nama << "! Umur anda adalah " << NIM << " tahun." << endl;

    return 0;
}
