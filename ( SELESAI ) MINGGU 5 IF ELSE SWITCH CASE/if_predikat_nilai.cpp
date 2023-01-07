#include <iostream>
using namespace std;

main(){
    int nilai;

    cout << "Masukkan nilai: ";cin >> nilai;

    if (nilai >= 90)
    {
        cout << "A";
    }  else if(nilai >= 80) {
        cout << "B";
    }  else if(nilai >= 70){
        cout << "C";
    } else {
        cout << "D";
    }
    
}