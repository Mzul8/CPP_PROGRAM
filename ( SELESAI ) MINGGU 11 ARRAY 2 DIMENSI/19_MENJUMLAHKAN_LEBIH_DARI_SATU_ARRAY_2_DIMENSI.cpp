#include <iostream>
#include <iomanip>

using namespace std;

main()
{
    int total = 0;
    int total2 = 0;
    int data[2][2] = {
        {1,2},
        {3,1}
    };
    int data2[2][2] = {
        {1,2},
        {3,1}
    };

    for(int i = 0; i < 2; i++)
    {
        for(int h = 0; h < 2; h++)
        {
            cout << setw(3) << data[i][h]; 
            total = total += data[i][h];
        }
            cout << endl;
    }

    for(int i = 0; i < 2; i++)
    {
        for(int h = 0; h < 2; h++)
        {
            cout << setw(3) << data[i][h]; 
            total2 = total2 += data[i][h];
        }
            cout << endl;
    }

    cout << "Hasil penjumlahan array dengan array: " << total + total2;
}