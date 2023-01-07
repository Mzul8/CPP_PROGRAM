#include <iostream>
using namespace std;


int main()
{
    int array[2][3] = {
        {1,2,3},
        {4,5,6}
    };

    // mendeklarasikan pointer aP 
    int *aP = &array[0][0];
    // variabel yang akan menampung nilai
    int sum = 0;

    // int i = 0; i < dimensi array 2*3; i++
    for(int i = 0; i < 6; i++)
    {
        // int sum = 0 + 
        sum += *aP;
        *aP++;
    }
    cout << "Hasil rata-rata nilai array 2 dimensi: " << (float)sum/6;
   
}