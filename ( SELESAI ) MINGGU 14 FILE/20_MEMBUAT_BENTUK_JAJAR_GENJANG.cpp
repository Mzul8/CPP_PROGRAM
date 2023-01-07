#include <iostream>
#include <fstream>
using namespace std;

main(){
    ofstream myfile;
    myfile.open("jajargenjang");
    int n = 4;

    for(int i = 1; i <= n; i++)
    {
        for(int j = n; j >= i; j--)
        {
            cout << " ";
            myfile << " ";
        }
        for(int k = 1; k <= 2 * i - 1; k++)
        {
            cout << "*";
            myfile << "*";
        }
        cout << endl;
        myfile << endl;
    }

    for(int i = 2; i <= n; i++)
    {
        for(int j = 0; j < i; j++)
        {
            cout << " ";
            myfile << " ";
        }

        for(int k = n; k >= (2 * i - n); k--)
        {
            cout << "*";
            myfile << "*";
        }
        cout << endl;
        myfile << endl;
    }

}