#include <iostream>
using namespace std;

int main() {
    
  int arr[5] = {1, 2, 3, 4, 5};

  // membuang element index 2 (nilai 3)
  int index = 2;
  for (int i = index; i < 4; i++) {
    arr[i] = arr[i+1];
  }

//   arr[2] = arr[2+1]
//   4
//   arr[3] = arr[3+1]
//   5

  for (int i = 0; i < 4; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;

  return 0;
}