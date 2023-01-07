#include <iostream>
using namespace std;

struct nilai
{
    int nim;
    int nilai;
};

nilai masuk()
{
    nilai nlai;
    cout << "Masukkan NIM  : "; cin >> nlai.nim;
    cout << "Masukkan Nilai: "; cin >> nlai.nilai;
    return nlai; 
}

nilai tampil(nilai nlai)
{
    cout << "\nNIM  : " << nlai.nim << endl;
    cout << "Nilai: " << nlai.nilai;
}

main()
{
    tampil(masuk());
}