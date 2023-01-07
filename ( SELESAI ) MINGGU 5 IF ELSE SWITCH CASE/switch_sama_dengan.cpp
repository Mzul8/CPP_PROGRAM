#include <iostream>
using namespace std;

main(){
    int angka;

    cout << "Masukkan Angka: ";
    cin >> angka;

    switch(angka){
        case 2:
            cout << "angka = 2";
        break;
        default:
            cout << "Masukkan angka yang sama dengan 2";
        break;
    }
    return 0;
}