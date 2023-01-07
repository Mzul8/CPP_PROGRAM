#include <iostream>
using namespace std;

main()
{
    int jumlahbulan;
    cout << "Masukkan jumlah Bulan "; cin >> jumlahbulan;

    string bulan[jumlahbulan];

    for(int i = 0; i < jumlahbulan; i++)
    {
        cout << "Masukkan Nama Bulan: "; cin >> bulan[i];
    }

cout << endl;

    for(int i = 0; i < jumlahbulan; i++)
    {
        cout << bulan[i] << endl;
    }
}