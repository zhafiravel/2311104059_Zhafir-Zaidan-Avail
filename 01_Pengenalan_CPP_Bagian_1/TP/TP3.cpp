#include <iostream>

using namespace std;

int main() {
  // Deklarasi variabel
  int bil1 = 2, bil2 = 3, hasil;

  // Membandingkan bil1 dan bil2, hasil akan bernilai 1 (true) jika benar, 0 (false) jika salah
  hasil = bil1 > bil2;  // Apakah bil1 lebih besar dari bil2?
  cout << hasil << endl;

  hasil = bil1 >= bil2; // Apakah bil1 lebih besar atau sama dengan bil2?
  cout << hasil << endl;

  hasil = bil1 < bil2;  // Apakah bil1 lebih kecil dari bil2?
  cout << hasil << endl;

  hasil = bil1 <= bil2; // Apakah bil1 lebih kecil atau sama dengan bil2?
  cout << hasil << endl;

  hasil = bil1 == bil2; // Apakah bil1 sama dengan bil2?
  cout << hasil << endl;

  hasil = bil1 != bil2; // Apakah bil1 tidak sama dengan bil2?
  cout << hasil << endl;

  return 0;
}
