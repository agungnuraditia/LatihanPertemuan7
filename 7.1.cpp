/* ---------------------------- */
/* Program Array Satu Dimensi */
/* ---------------------------- */
#include <iomanip>
#include <iostream>
using namespace std;

int main() {
  int i, j;
  char nama[5][20];
  int nilai1[5];
  int nilai2[5];
  int hasil[5];
  // clrscr();
  for (i = 1; i <= 2; i++) {
    cout << "Data Ke - " << i << endl;
    cout << "Nama Siswa : ";
    cin >> nama[i];
    for (j = 1; j <= 1; j++) {
      cout << "Nilai MidTest : ";
      cin >> nilai1[i];
      cout << "Nilai Final : ";
      cin >> nilai2[i];
    }
    hasil[i] = (nilai1[i] * 0.40) + (nilai2[i] * 0.60);
  }
  cout << endl;
  cout << "------------------------------------------";
  cout << "-------" << endl;
  cout << "No. Nama Siswa  Nilai    Nilai   Hasil " << endl;
  cout << "                MidTest  Final   Ujian " << endl;
  cout << "------------------------------------------";
  cout << "-------" << endl;
  for (i = 1; i <= 2; i++) {
    cout << setiosflags(ios::left) << setw(4) << i;
    cout << setiosflags(ios::left) << setw(14) << nama[i];
    cout << setprecision(2) << setw(8) << nilai1[i];
    cout << setprecision(2) << setw(8) << nilai2[i];
    cout << setprecision(2) << setw(8) << hasil[i] << endl;
  }
  cout << "------------------------------------------";
  cout << "-------" << endl;
  return 0;
}
