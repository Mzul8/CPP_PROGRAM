#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int pangkat,angka;
    cout << "Masukkan Angka: ";cin >> angka;
    cout << "Masukkan Pangkat: ";cin >> pangkat;

    cout << angka << " pangkat " << pangkat << " adalah " << pow(angka,pangkat);
}