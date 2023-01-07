#include <iostream>
using namespace std;

int perkalian();

int main()
{
    perkalian();
}

int perkalian(){
    int angka,pengkali;

    cout << "Masukkan angka "; cin >> angka;
    cout << "Masukkan angka-2 "; cin >> pengkali;
    cout << "Hasil perkalian "<< angka << " * " << pengkali << " = " << angka * pengkali; 
}
