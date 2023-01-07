#include<iostream>
using namespace std;

main()
{
    int n = 4; 

    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= 1; j++)
        {
            cout << i;
        }
        for(int l = n; l >= i; l--)
        {
            cout << " ";
        }
        cout << i;
        cout << endl;
    }
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= 1; j++)
        {
            cout << j;
        }
        for(int l = 1; l <= i; l++)
        {
            cout << " ";
        }
        cout << i;
        cout << endl;
    }
}