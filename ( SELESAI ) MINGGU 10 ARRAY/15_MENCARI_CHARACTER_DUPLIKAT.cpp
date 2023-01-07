#include <iostream>
#include <unordered_set> // untuk unordered_set
using namespace std;

int main() {
  // Declare an array of integers with 5 elements
  char arr[5] = {'a', 'b', 'c', 'c', 'e'};

  // Declare an unordered set to store the unique elements
  unordered_set<int> unique;

  // Iterate over the elements of the array
  for (int i = 0; i < 5; i++) {
    // If the element is already in the set, it is a duplicate
    if (unique.count(arr[i]) > 0) {
      cout << arr[i] << " adalah char duplikat." << endl;
    }
    // Otherwise, add it to the set
    else {
      unique.insert(arr[i]);
    }
  }

  return 0;
}

//This program uses an unordered_set from the unordered_set header to store the unique elements of the array. An unordered set is a container that stores unique elements in an unsorted manner, and provides fast lookup and insertion operations.
