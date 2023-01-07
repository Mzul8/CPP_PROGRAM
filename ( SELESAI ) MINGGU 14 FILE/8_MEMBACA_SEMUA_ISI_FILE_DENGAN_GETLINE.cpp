#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    ifstream vfile;
    string teks;
    vfile.open("file.txt");

    while(getline(vfile,teks))
    {
        cout << teks << "\n";
    }
    vfile.close();
}