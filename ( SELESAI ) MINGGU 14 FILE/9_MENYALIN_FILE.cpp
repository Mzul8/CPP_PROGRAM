#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream vfile;
    ofstream vofile;
    string teks;

    vfile.open("file.txt");
    vofile.open("salinanfile.txt",ios::app);
    while(getline(vfile,teks))
    {
        cout << teks << "\n";
        vofile << teks << "\n";
    }
    vofile.close();
    vfile.close();
}