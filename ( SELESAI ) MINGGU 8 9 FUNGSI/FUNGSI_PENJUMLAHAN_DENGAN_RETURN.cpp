#include <iostream>
using namespace std;

// int penjumlahan();

int penjumlahan(int angka, int penjumlah)
{
    return(angka + penjumlah);
}

int main()
{
    int a,b;
    cout << "Masukkan angka: ";cin >> a;
    cout << "Masukkan angka penjumlah: ";cin >> b;
    cout << "Hasil penjumlahan: " << penjumlahan(a,b);    
}

