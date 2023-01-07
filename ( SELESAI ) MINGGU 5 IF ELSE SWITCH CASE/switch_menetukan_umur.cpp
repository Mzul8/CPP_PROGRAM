#include <iostream>
using namespace std;

main(){
    int umur;

    cout << "Masukkan umur: ";cin >> umur;

    switch (umur >= 17){
        case true:
            cout << "anda sudah dewasa";
        break;

        default:
            cout << "anda belum dewasa";
        break;
    } 

}