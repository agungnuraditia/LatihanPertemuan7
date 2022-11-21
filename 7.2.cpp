#include <iostream>
using namespace std;
int main() {
  int A[50], masuk, jumlah = 0, c, cari;
  cout << " Masukan Banyaknya Bilangan ";
  cin >> masuk;
  for (c = 0; c < masuk; c++) {
    cout << "Masukan Indeks Ke - " << c << " : ";
    cin >> A[c];
  }
  cout << endl;
  cout << "Deretan Bilangan ";
  for (c = 0; c < masuk; c++) {
    cout << A[c];
  }
  cout << endl;
  cout << "Masukan bilangan yang akan dicari :";
  cin >> cari;
  if (A[c] == cari) {
    cout << cari;
  } else
    cout << "Bilangan tidak ditemukan";
  for (int c = 0; c < masuk; c++) {
    if (A[c] == cari) {
      jumlah++;
      cout << "Bilangan " << cari << " Ditemukan sebanyak " << jumlah << endl;
      for (c = 0; c < masuk; c++) {
        if (A[c] == cari) {
          cout << "Pada Posisi Ke " << c;

          break;
        }
      }
    }
  }
  return 0;
}