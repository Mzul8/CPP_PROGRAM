#include <iostream>
#include <iomanip>

using namespace std;

main()
{
    
    int data[2][2] = {
        {1,20},
        {3,1}
    };

    for(int i = 0; i < 2; i++)
    {
        for(int h = 0; h < 2; h++)
        {
            cout << setw(3) << data[i][h]; 
        }
            cout << endl;
    }
}