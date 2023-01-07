#include <iostream>
using namespace std;

main(){
    int nilai;

    cout << "Masukkan nilai: ";cin >> nilai;

    switch (nilai >= 80){
        case true:
            cout << "Selamat anda lulus";
        break;

        default:
            cout << "Maaf anda belum lulus";
        break;
    } 
    
}