#include <iostream>
using namespace std;

int main(){
    int angka, setangka;
    setangka = 20;

    cout << "Masukkan angka yang sama dengan 20: ";
    cin >> angka;
    if(angka == setangka){
        cout << "angka sama dengan 20";
    } else if(angka >= setangka){
        cout << "angka lebih besar";
    } else if(angka <= setangka){
        cout << "angka lebih kecil";
    }

    return 0;
}