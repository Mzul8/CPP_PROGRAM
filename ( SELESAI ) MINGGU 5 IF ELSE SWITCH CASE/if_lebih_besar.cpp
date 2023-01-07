#include <iostream>
using namespace std;

int main(){
    int angka, setangka;
    setangka = 20;

    cout << "Masukkan angka lebih besar dari 20: ";
    cin >> angka;
    if(angka >= setangka){
        cout << "angka lebih besar";
    } else {
        cout << "angka lebih kecil";
    }
    
    return 0;
}