#include <iostream>
using namespace std;

main(){
    int angka, range = 1;

    cout << "Masukkan angka: "; cin >> angka;
    while(range <= angka){
        cout << range << " ";
        range++;
    }
}