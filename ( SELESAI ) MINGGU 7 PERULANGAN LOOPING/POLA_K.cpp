#include<iostream>
using namespace std;

main()
{
    int n = 4; 

    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= 1; j++)
        {
            cout << "*";
        }
        for(int l = n; l >= i; l--)
        {
            cout << " ";
        }
        cout << "*";
        cout << endl;
    }
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= 1; j++)
        {
            cout << "*";
        }
        for(int l = 1; l <= i; l++)
        {
            cout << " ";
        }
        cout << "*";
        cout << endl;
    }
}