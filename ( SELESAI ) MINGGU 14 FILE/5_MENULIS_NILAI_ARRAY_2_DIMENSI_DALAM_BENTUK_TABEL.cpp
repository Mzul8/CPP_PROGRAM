#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

int main()
{
    ofstream myfile5;

    // data array

    int data[2][2] = {
        {1,90},
        {20,98}
    };

    myfile5.open("menuliskan_nilai_array_2_dimensi_dalam_bentuk_tabel.txt", ios::app);

    myfile5 << setw(6) << "Data\n";
    for(int i = 0; i < 2; i++)
    {
        for(int h = 0; h < 2; h++)
        {
            myfile5 << setw(3) << data[i][h];
        }
        myfile5 << endl;
    }

    myfile5.close();
}