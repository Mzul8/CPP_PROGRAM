#include <iostream>
using namespace std;

main(){
    int n = 4;

    cout << "\nPola segitiga dengan angka\n";
    
    for(int i = 1; i <= n; i++)
    {
        for(int j = n; j >= i; j--)
        {
            cout << " ";
        }
        for(int k = 1; k <= 2 * i - 1; k++)
        {
            cout << k;
        }
        cout << endl;
    }
}