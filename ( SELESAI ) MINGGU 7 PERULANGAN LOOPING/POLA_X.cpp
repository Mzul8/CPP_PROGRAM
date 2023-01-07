#include<iostream>
using namespace std;

main()
{
    int n = 4; 

    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= i ; j++)
        {
            cout << " ";
        }
        cout << "*";
        for(int k = n; k >= 2 * i - n; k--)
        {
            cout << " ";
        }
        cout << "*";
        cout << endl;

    }
    cout << "     *\n";
    // baris 2
    for(int i = 1; i <= n; i++)
    {
        for(int l = n; l >= i; l--)
        {
            cout << " ";
        }
        cout << "*";

        for(int m = 1; m <= 2 * i - 1; m++)
        {
            cout << " ";
        }
        cout << "*";
        cout << endl;
    }
}