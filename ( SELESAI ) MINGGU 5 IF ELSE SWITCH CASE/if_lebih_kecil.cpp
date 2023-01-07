#include <iostream>
using namespace std;

int main(){
    int angka, setangka;
    setangka = 20;

    cout << "Masukkan angka lebih kecil dari 20: ";
    cin >> angka;
    if(angka <= setangka){
        cout << "angka lebih kecil";
    } else {
        cout << "angka lebih besar";
    }

    return 0;
}