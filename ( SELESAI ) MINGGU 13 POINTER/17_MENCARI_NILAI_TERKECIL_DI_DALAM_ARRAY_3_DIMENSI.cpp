#include <iostream>
using namespace std;


int main()
{
    int angka[2][2][2] = {
        {
            {1,2},
            {4,5}
        }
    };

    int *pA = &angka[0][0][0];
    int min = *pA;
    
    for(int i = 0; i < 4; i++)
    {
        if(min > *pA)
        {
            min = *pA;
        }
        *pA++;
    }
    cout << "Nilai Terkecil: " << min;
}