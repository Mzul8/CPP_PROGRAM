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


    cout << "Nilai array 1 \n";
    for(int i = 0; i < baris; i++)
    {
        for(int j = 0; j < kolom; j++)
        {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Nilai array 2 \n";
    for(int i = 0; i < baris; i++)
    {
        for(int j = 0; j < kolom; j++)
        {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Hasil penjumlahan nilai data array \n";


    for(int i = 0; i < baris; i++)
    {
        for(int j = 0; j < kolom; j++)
        {
            cout << array[i][j] + array[i][j] << " ";
        }
        cout << endl;
    }
}