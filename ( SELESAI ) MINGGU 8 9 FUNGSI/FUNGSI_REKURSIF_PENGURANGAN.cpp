#include <iostream>
using namespace std;

int substract(int a, int b)
{
    if (b == 0)
    return a;
    else
    return substract(a - 1, b - 1);
}

int main()
{
    int a, b;
    cout << "Masukkan 2 angka: ";
    cin >> a >> b;
    cout << "Hasil pengurangan: " << substract(a, b) << endl;
    return 0;
}