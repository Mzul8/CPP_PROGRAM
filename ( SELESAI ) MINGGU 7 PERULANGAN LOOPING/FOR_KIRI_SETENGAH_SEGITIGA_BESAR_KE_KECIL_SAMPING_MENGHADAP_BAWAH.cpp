#include <iostream>
using namespace std;

main(){
    int n = 4;

    for(int i = 1; i <= n; i++)
    {
        for(int j = n; j >= i; j--)
        {
            cout << " ";
        }
        cout << "*";
        cout << endl;
    }

}