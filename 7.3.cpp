#include <iostream>
using namespace std;
int main() {
  int nilai[10] = {23, 6, 89, 12, 45, 67, 9, 90, 54, 30};
  int maks = 0, i, j;
  for (i = 0; i < 10; i++) {
    if (maks < nilai[i]) {
      maks = nilai[i];
    }
  }
  cout << "Nilai Maksimal dari array diatas adalah :" << maks << endl;
  int minim = 100;
  for (j = 0; j < 10; j++) {
    if (minim > nilai[j]) {
      minim = nilai[j];
    }
  }
  cout << "Nilai Minimum dari array diatas adalah :" << minim << endl;
  return 0;
}