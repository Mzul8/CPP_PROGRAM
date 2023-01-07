#include <iostream>
using namespace std;

main()
{
    int baris,kolom;
    cout << "Masukkan jumlah baris: ";cin >> baris;
    cout << "Masukkan jumlah kolom: ";cin >> kolom;

    int array[baris][kolom];

    for(int i = 0; i < baris; i++)
    {
        for(int j = 0; j < kolom; j++)
        {
            cout << "Masukkan data kolom [" << i << "][" << j << "]: ";cin >> array[i][j];
        }
        cout << endl;
    }


    cout << "Nilai kolom 1 \n";
    for(int i = 0; i < baris - 1; i++)
    {
        for(int j = 0; j < kolom; j++)
        {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Nilai kolom 2 \n";
    for(int i = 1; i < baris; i++)
    {
        for(int j = 0; j < kolom; j++)
        {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Hasil penjumlahan antar kolom \n";
    for(int i = 0; i < baris; i++)
    {
        for(int j = 0; j < kolom; j++)
        {
            cout << array[i][j] + array[i][j] << " ";
        }
        cout << endl;
    }

}