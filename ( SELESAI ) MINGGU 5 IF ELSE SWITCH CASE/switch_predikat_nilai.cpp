#include <iostream>
using namespace std;

main(){
    int nilai;

    cout << "Masukkan nilai: ";cin >> nilai;

    switch (nilai >= 90){
        case true:
            cout << "Predikat nilai: A";
        break;

        default:
            cout << "untuk mendapatkan predikat A nilai harus >= 90";
        break;
    }  
    
}