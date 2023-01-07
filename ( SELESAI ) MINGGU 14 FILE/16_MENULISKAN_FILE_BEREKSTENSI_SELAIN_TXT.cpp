#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ofstream tulisfile;
    string namafile;

    // buat namafile
    cout << "Masukkan Nama File: "; cin >> namafile;
    tulisfile.open(namafile, ios::app);

    bool looping = true;
    string teks;
    cout << "Masukkan isi file: ";
    while(looping)
    {
        getline(cin,teks);
        tulisfile << teks;

        if(teks == "selesai")
        {
            looping = false;
        }
    }
}
