#include <iostream>
using namespace std;

main()
{
    int pilihanBulan;
    string namaBulan[6][2] = {
        {"Januari","Februari"},
        {"Maret","April"},
        {"Mei","Juni"},
        {"Juli","Agustus"},
        {"September","Oktober"},
        {"November","Desember"}
    };


    cout << "Masukkan bulan dalam bentuk angka: ";
    cin >> pilihanBulan;

    switch (pilihanBulan)
    {
    case 1:
        cout << namaBulan[0][0];
    break;
    case 2:
        cout << namaBulan[0][1];
    break;
    case 3:
        cout << namaBulan[1][0];
    break;
    case 4:
        cout << namaBulan[1][1];
    break;
    case 5:
        cout << namaBulan[2][0];
    break;
    case 6:
        cout << namaBulan[2][1];
    break;
    case 7:
        cout << namaBulan[3][0];
    break;
    case 8:
        cout << namaBulan[3][1];
    break;
    case 9:
        cout << namaBulan[4][0];
    break;
    case 10:
        cout << namaBulan[4][1];
    break;
    case 11:
        cout << namaBulan[5][0];
    break;
    case 12:
        cout << namaBulan[5][1];
    break;
    
    default:
        cout << "Nama Bulan tidak ditemukan";
    break;
    }
}