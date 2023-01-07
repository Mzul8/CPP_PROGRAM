#include<iostream>
using namespace std;

main(){
    int n = 4;
    cout << "Pola Segitiga 1 \n";

    for(int i = 1; i <= n; i++)
    {
        for(int j = n; j >= i; j--)
        {
            cout << " ";
        }
        for(int k = 1; k <= 2 * i - 1; k++)
        {
            cout << "*";
        }
        cout << endl;
    }

    for(int i = 2; i <= n; i++)
    {
        for(int j = 0; j < i; j++)
        {
            cout << " ";
        }

        for(int k = n; k >= (2 * i - n); k--)
        {
            cout << "*";
        }
        cout << endl;
    }

}