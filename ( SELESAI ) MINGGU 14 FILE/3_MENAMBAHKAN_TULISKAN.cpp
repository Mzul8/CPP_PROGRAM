#include <iostream>
#include <fstream>
using namespace std;

int main()
{
   ofstream myfile3;

   myfile3.open("menambahkan_tulisan.txt", ios::app);

   for(int i = 1; i < 3; i++)
   {
    myfile3 << i << endl;
   }

   myfile3.close(); 
}