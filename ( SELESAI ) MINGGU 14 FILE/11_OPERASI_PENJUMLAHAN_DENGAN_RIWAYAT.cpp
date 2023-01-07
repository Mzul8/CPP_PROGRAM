#include <iostream> 
#include <fstream> // fstream ofstream ifstream
using namespace std;

int main()
{
    int angka,penambah;
    ofstream hasilPenjumlahan;

    hasilPenjumlahan.open("hasilPenjumlahan.txt",ios::app);

    cout << "Masukkan angka "; cin >> angka;
    cout << "Masukkan angka-2 "; cin >> penambah;
    cout << "Hasil Penjumlahan "<< angka << " + " << penambah << " = " << angka + penambah; 

    hasilPenjumlahan << "Hasil Penjumlahan "<< angka << " + " << penambah << " = " << angka + penambah << "\n"; 

    hasilPenjumlahan.close();
}
