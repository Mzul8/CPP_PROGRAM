#include <iostream>
#include <algorithm> 
using namespace std;

int main() {
  int arr[5] = {1, 2, 3, 4, 5};

  cout << "Nilai sebelum dibalikan: \n";
  for (int i = 0; i < 5; i++) {
    cout << arr[i] << " ";
  }
  // membalikan elemen array
  reverse(arr, arr + 5);
  
  cout << "\nNilai setelah dibalikan: \n";
  for (int i = 0; i < 5; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;

  return 0;
}