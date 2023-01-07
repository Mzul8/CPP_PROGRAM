#include <iostream>
using namespace std;

int pembagian();

int main()
{
    pembagian();
}

int pembagian()
{
    int angka,pembagi;

    cout << "Masukkan angka "; cin >> angka;
    cout << "Masukkan pembagi "; cin >> pembagi;
    cout << "Hasil pembagian "<< angka << " / " << pembagi << " = " << angka / pembagi; 
}