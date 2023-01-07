#include <iostream>
using namespace std;

int pengurangan(int a, int b)
{
    return(a - b);
}

int main()
{
    int angka, pengurang;
    
    cout << "Masukkan angka: ";cin >> angka;
    cout << "Masukkan pengurang: ";cin >> pengurang;
    cout << "Hasil pengurangan: " << pengurangan(angka, pengurang);
}