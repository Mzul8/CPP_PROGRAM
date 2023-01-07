#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream myfile4;

    myfile4.open("membuat_bentuk_segitiga.txt", ios::app);
    
    for(int i = 1; i <= 4; i++)
    {
        for(int j = 4; j >= i ; j--)
        {
            myfile4 << "*";
        }
        myfile4 << endl;
    }
    myfile4.close();
}