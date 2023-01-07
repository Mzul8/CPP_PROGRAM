#include <iostream>
using namespace std;

main()
{
    int i = 5, j = 1;
    int *iP = &i, *jP = &j;

    cout << "Hasil penjumlahan: " << *iP << " + " << *jP << " = " << *iP + *jP;
}