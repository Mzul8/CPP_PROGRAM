#include <iostream>
using namespace std;

int main() {
    char array[5]; 
    char ch;
    int count = 0;

    cout << "Masukkan 5 character: " << endl;
    for (int i = 0; i < 5; i++) {
        cin >> array[i];
    }
    
    cout << "Masukkan character yang ingin ditemukan di array: " << endl;
    cin >> ch;

    for (int i = 0; i < 5; i++) {
        if (array[i] == ch) {
        count++;
        }
    }
    cout << "Jumlah yang ditemukan " << ch << ": " << count << endl;
    return 0;
}