#include <iostream>

using namespace std;

int main()
{
    char array[10] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'};
    char cari;

    cout << "Masukkan 1 character: "; cin >> cari;

for (int i = 0; i < 10; i++)
{
    if (array[i] == cari)
    {
        cout << "Character ditemukan pada index " << i << endl;
        return 0;
    }
}

cout << "Character tidak ditemukan dalam array" << endl;

return 0;
}