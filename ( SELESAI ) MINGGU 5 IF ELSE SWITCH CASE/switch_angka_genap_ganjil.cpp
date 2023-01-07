#include <iostream>
using namespace std;

main(){
    int angka;

    cout << "Masukkan angka: "; cin >> angka;
    switch(angka % 2 == 0){
        case true:
            cout << "angka: " << angka << " adalah genap";
        break;

        default:
            cout << "angka: " << angka << " adalah ganjil";
        break;
    }
    return 0;
}