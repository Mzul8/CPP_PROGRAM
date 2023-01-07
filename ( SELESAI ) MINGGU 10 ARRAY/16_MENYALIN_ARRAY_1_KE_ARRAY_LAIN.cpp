#include <iostream>
#include <algorithm> 
using namespace std;

int main() {
  int arr1[5] = {1, 2, 3, 4, 5};

// tujuan array yang akan menyalin
  int arr2[5];

  // menyalin elemen arr1 ke arr2
  copy(arr1, arr1 + 5, arr2);

  cout << "Array 1: \n";
  for (int i = 0; i < 5; i++) {
    cout << arr1[i] << " ";
  }
  cout << endl;

  cout << "Array 2: \n";
  for (int i = 0; i < 5; i++) {
    cout << arr2[i] << " ";
  }
  cout << endl;

  return 0;
}