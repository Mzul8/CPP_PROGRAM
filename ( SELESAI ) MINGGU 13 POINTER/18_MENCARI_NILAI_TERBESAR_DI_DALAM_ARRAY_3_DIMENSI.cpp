#include <iostream>
using namespace std;


int main()
{
    int angka[2][2][2] = {
        {
            {7,10},
            {1,14}
        }
    };

// jika ditampilkan *pA adalah 1;
    int *pA = &angka[0][0][0];
// max = 1
    int max = *pA;

    for(int i = 0; i < 6; i++)
    {
        // 1 nilai awal *pA = 1 > max = 1
        // 2 nilai *pA = 2 > max = 1 = true
        if(*pA > max){
            max = *pA;
        }

        *pA++;
        // nilai awal *pA = 1 index ke 0 , index tadi ditambah 1 = 1, index ke 1 nilainya adalah 2 
        cout << *pA << endl;
    }

    cout << "Nilai Terbesar: " << max;
}