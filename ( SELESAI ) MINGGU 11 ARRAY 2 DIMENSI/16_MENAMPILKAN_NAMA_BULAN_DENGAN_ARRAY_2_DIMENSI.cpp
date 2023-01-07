#include <iostream>
using namespace std;

main()
{
    string namaBulan[6][2] = {
        {"Januari","Februari"},
        {"Maret","April"},
        {"Mei","Juni"},
        {"Juli","Agustus"},
        {"September","Oktober"},
        {"November","Desember"}
    };

    for(int i = 0; i < 6; i++)
    {
        for(int j = 0; j <= 1; j++)
        {
            cout << namaBulan[i][j] << endl;
        }
    }

}