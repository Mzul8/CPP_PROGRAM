#include <iostream>
using namespace std;

int penjumlahan(int angka, int penjumlah)
{
    cout << "Hasil penjumlahan: " << angka + penjumlah;
}

int main()
{
    int angka,penjumlah;

    cout << "Masukkan angka "; cin >> angka;
    cout << "Masukkan angka-2 "; cin >> penjumlah;
    penjumlahan(angka,penjumlah);

}