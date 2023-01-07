#include<iostream>
using namespace std;

main(){

    cout << "Pola 1 \n";
    for(int i = 1; i <= 4; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    cout << "\nPola 2 \n";
    for(int i = 1; i <= 4; i++)
    {
        for(int j = 4; j >= i; j--)
        {
            cout << "*";
        }
        cout << endl;
    }
}