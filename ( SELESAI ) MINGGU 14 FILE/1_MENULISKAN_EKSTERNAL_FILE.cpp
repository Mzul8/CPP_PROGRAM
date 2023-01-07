#include <iostream>
#include <fstream> // ofstream, ifstream, fstream
using namespace std;

int main()
{
    /* mendeklarasikan nya seperti membuat variabel */
    ofstream Myfile;
    /*
        ios::out default,  operasi output
        ios::app           menuliskan pada ahir baris atau append
        ios::trunc default, membuat file jika tidak ada, menghapus jika ada
    */

    Myfile.open("menuliskan_eksternal_file.txt", ios::out);
    Myfile << "Ini teks!\n";
    Myfile.close();

}