#include <iostream>
using namespace std;

main()
{
    char kalimat[6][2] = {
        {'H','E'},
        {'L','L'},
        {'O',' '},
        {'W','O'},
        {'R','L'},
        {'D','!'}
    };

    for(int i = 0; i < 6; i++)
    {
        for(int j = 0; j <= 1; j++)
        {
            cout << kalimat[i][j];
        }
    }

}
