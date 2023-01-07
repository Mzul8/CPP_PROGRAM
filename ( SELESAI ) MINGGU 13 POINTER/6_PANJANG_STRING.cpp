#include <iostream>
using namespace std;

main()
{
    char hW[] = "Hello World!";
    char *phW = hW;
    int panjang = 0;

    while(*phW != '\0'){
        panjang++;
        cout << panjang << endl;
        phW++;
        cout << phW << endl;
    }
    cout << "Panjang string: " << hW << " = " << panjang;
}