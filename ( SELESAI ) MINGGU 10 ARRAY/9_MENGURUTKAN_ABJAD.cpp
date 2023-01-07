#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string array[5]; 
    cout << "Masukkan 5 string / char: " << endl;
    for (int i = 0; i < 5; i++) {
    cin >> array[i];
    }
    sort(array, array+5); // mengurutkan array menggunakan fungsi STL sort 
    cout << "Char yang sudah terurut: " << endl;
    for (int i = 0; i < 5; i++) {
    cout << array[i] << endl;
    }
return 0;
}