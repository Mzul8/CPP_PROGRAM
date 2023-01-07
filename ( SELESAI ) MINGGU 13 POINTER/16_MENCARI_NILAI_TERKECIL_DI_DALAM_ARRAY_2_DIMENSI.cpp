#include <iostream>
using namespace std;


int main()
{
    int angka[2][3] = {
        {2,1,3},
        {9,10,20}
    };

    int *pA = &angka[0][0];
    int min = *pA;
    
    for(int i = 0; i < 5; i++)
    {
        if(min > *pA)
        {
            min = *pA;
        }
        *pA++;
    }
    cout << "Nilai Terkecil: " << min;
}