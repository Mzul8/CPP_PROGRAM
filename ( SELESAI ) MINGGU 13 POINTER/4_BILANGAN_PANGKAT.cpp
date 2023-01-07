#include <iostream>
using namespace std;

void Bpangkat(int *a, int *b, int *n)
{
    for(int i = 1; i <= *b; i++)
        *n *= *a;
}
int main()
{
    int angka,pangkat,en = 1;

    cout << "Masukkan angka  : "; cin >> angka;
    cout << "Masukkan pangkat: "; cin >> pangkat;

    Bpangkat(&angka, &pangkat, &en);
    cout << "Hasil perpangkatan: " << en;
}