#include <iostream>
using namespace std;

struct mahasiswa{
    int nim = 123;
    string nama = "Mahri Zulfendri";
};

int main()
{
    mahasiswa mhs;
    cout << "NIM : " << mhs.nim << endl;
    cout << "Nama: " << mhs.nama << endl;
}