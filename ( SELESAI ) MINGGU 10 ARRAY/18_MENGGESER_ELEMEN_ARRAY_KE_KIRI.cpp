#include <iostream>

int main() {

  int arr[5] = {1, 2, 3, 4, 5};

  for (int i = 0; i < 4; i++) {
    arr[i] = arr[i+1];
  }
  arr[4] = 0; // set element terahir menjadi 0

  // Print the shifted array
  for (int i = 0; i < 5; i++) {
    std::cout << arr[i] << " ";
  }
  std::cout << std::endl;

  return 0;
}