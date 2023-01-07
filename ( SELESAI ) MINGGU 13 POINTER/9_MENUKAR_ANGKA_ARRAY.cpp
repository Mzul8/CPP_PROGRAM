#include <iostream>
using namespace std;


int main()
{
    int angka[] = {1,2,1,4,10}; 
    // int *pA1 = angka = 1

    int *pA1 = angka;
    // *pA2 = 5;
    int *pA2 = angka + 4;

    // 1 < 5 = true
    while(*pA1 < *pA2){
        // temp = 1;
        int temp = *pA1;
        // *pA1 = index ke 5
        *pA1 = *pA2;
        *pA2 = temp;

        *pA1++;
        *pA2--;
    }
    cout << "Hasil menukar nilai array: ";
    for(int i = 0; i < 5; i++)
    {
        cout << angka[i] << " ";
    }
    cout << endl;
}