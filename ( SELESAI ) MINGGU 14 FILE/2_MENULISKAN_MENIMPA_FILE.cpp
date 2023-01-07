#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream myfile2;

    myfile2.open("menuliskan_menimpa_file.txt", ios::trunc);
        myfile2 << "Tulisan ini akan ditimpa dengan tulisan selanjutnya";
    myfile2.close();
}