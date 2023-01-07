#include <iostream>
using namespace std;


int main()
{
    int angka[] = {1,2,1,4,10}; 
    // int *pA1 = angka = 1

    int *pA= angka;
    // *pA2 = 5;
    int total = 0;

    for(int i = 0; i < 5; i++)
    {
      total += *pA;
      *pA++;  
    }
    cout << "Hasil total nilai array: " << total << endl;
}