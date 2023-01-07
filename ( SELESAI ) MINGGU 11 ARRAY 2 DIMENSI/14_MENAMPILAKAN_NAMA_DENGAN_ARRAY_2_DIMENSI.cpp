#include <iostream>
using namespace std;

main()
{
    char nama[3][2] = {
        {'M','A'},
        {'H','R'},
        {'I',' '}
    };

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j <= 1; j++)
        {
            cout << nama[i][j];
        }
    }

}
