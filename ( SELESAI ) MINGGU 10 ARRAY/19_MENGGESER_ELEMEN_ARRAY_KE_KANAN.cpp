#include <iostream>
using namespace std;

int main() {

  int arr[5] = {1, 2, 3, 4, 5};

  for (int i = 4; i > 0; i--) {
    arr[i] = arr[i-1];
  }
  arr[0] = 0; // set element pertama 0

  for (int i = 0; i < 5; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;

  return 0;
}