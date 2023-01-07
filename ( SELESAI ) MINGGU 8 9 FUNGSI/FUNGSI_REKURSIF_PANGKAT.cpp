#include <iostream>
using namespace std;

int perpangkat(int a,int b)
{
    if(b == 1){
        return a;
    }
    else {
        return a * perpangkat(a, b - 1);
    }
}


int main()
{
    int angka, pangkat;
    cout << "Masukkan angka: "; cin >> angka; 
    cout << "Masukkan pangkat: ";cin >> pangkat;  

    cout << "Hasil : " << perpangkat(angka,pangkat);
}