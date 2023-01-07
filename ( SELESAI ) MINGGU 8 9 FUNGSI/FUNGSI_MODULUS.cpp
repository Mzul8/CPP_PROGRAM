#include <iostream>
using namespace std;

int modulus();

int main()
{
    modulus();
}

int modulus(){
    int angka,modulus;

    cout << "Masukkan angka "; cin >> angka;
    cout << "Masukkan angka-2 "; cin >> modulus;
    cout << "Hasil modulus "<< angka << " % " << modulus << " = " << angka % modulus; 
}
