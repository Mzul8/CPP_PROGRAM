#include <iostream>
#include <string.h>
using namespace std;


int main()
{
    char str[] = "Hello world!"; 
    // char *pA1 = str = H

    char *pA1 = str;
    char *pA2 = str + strlen(str) - 1;

    while(pA1 < pA2){
        char temp = *pA1;
        *pA1 = *pA2;
        *pA2 = temp;

        *pA1++;
        *pA2--;
    }
    cout << "Hasil menukar Hello world!: " << str;
}