#include <iostream>
#include <iomanip>

using namespace std;

main()
{
    int total = 0;
    int data[2][2] = {
        {2,2},
        {2,2}
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

    cout << "Hasil penjumlahan kolom dengan kolom: " << total;
    cout << "\nHasil rata - rata: " << total / (2 * 2);

}