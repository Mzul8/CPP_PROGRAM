#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream vfile;
    string teks;
    vfile.open("file.txt");

// jika belum sampai di ahir 
    while(!vfile.eof())
    {
        vfile >> teks;
        cout << teks << "\n"; 
    }
    vfile.close();
}