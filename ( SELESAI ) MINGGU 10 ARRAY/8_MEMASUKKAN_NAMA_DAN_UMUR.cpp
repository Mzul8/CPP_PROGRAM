#include <iostream>
using namespace std;

struct orang {
    string nama;
    int umur;
};

int main() {
    orang array[2]; 
    cout << "Masukkan 2 nama orang dan umur: " << endl;

    for (int i = 0; i < 2; i++) {
        cin >> array[i].nama >> array[i].umur;
    }

    for (int i = 0; i < 5; i++) {
        cout << "Nama: " << array[i].nama << " Umur: " << array[i].umur << endl;
    }
}