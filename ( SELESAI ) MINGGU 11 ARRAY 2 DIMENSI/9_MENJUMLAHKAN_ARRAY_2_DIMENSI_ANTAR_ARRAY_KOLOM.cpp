#include <iostream>
using namespace std;

main()
{
    int baris,kolom;
    cout << "Untuk array ke 1\n";
    cout << "Masukkan jumlah baris: ";cin >> baris;
    cout << "Masukkan jumlah kolom: ";cin >> kolom;

    int array[baris][kolom];

    for(int i = 0; i < baris; i++)
    {
        for(int j = 0; j < kolom; j++)
        {
            cout << "Masukkan nilai kolom [" << i << "][" << j << "]: ";cin >> array[i][j];
        }
        cout << endl;
    }

    cout << "Masukkan nilai untuk array ke 2\n";

    int array2[baris][kolom];

    for(int i = 0; i < baris; i++)
    {
        for(int j = 0; j < kolom; j++)
        {
            cout << "Masukkan nilai kolom [" << i << "][" << j << "]: ";cin >> array2[i][j];
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
            cout << array2[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Hasil penjumlahan nilai data array kolom\n";

    for(int i = 0; i < baris - 1; i++)
    {
        for(int j = 0; j < kolom; j++)
        {
            cout << array[i][j] + array2[i][j]<< " ";
        }
        cout << endl;
    }

    for(int i = 1; i < baris; i++)
    {
        for(int j = 0; j < kolom; j++)
        {
            cout << array[i][j] + array2[i][j] << " ";
        }
        cout << endl;
    }
}