#include <iostream>
using namespace std;

main(){
    int setangka;
    
    cout << "Masukkan angka: "; cin >> setangka;

    switch(setangka >= 20){
        case true:
            cout << "angka " << setangka << " lebih besar dari 20";
        break;

        default:
            cout << "angka " << setangka << " harus lebih besar dari 20";
        break;
    }

    
}