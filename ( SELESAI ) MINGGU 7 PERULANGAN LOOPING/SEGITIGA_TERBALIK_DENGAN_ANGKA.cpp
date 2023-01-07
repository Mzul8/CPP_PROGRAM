#include<iostream>
using namespace std;

main(){
    int n = 4;

    for(int i = 1; i <= n; i++)
    {
        for(int j = 0; j < i; j++)
        {
            cout << " ";
        }

        for(int k = n; k >= (2 * i - n); k--)
        {
            cout << i;
        }
        cout << endl;
    }

}