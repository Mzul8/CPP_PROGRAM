#include <iostream>
using namespace std;


int main()
{
    int angka[] = {2,1,3,9,10};

    int *pA = angka;
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