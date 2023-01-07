#include <iostream>
#include <algorithm> // untuk std::min and std::max
using namespace std;

int main() {

  int arr[5] = {3, 7, 2, 4, 1};

  int max = *std::max_element(arr, arr + 5);

  cout << "Nilai Terbesar: " << max << endl;

  return 0;
}