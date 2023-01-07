#include <iostream>
#include <fstream>
using namespace std;

int membalikkanAngka(int n) {
 
   static int temp,sum;
 
   if(n>0){
  
      temp = n%10;
      sum = sum*10 + temp;

      membalikkanAngka(n/10);

   } else {
  
     return sum;
   }
 
}

int main() {
  ofstream myfile;
  int n,balik;
   
   myfile.open("membalikkanangka.txt",ios::app);
   cout << "Masukkan angka: ";
   cin >> n;

   myfile << "Sebelum dibalik: " << n;

   balik = membalikkanAngka(n);
 
   cout << "Hasil angka terbalik: " << balik;
   
   myfile << "\nSetelah dibalik: " << balik;

   return 0;
}