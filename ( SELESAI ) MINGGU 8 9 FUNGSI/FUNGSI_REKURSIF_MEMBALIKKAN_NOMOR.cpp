#include <iostream>
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
 
  int n,balik;

   cout << "Masukkan angka: ";
   cin >> n;

   balik = membalikkanAngka(n);
 
   cout << "Hasil angka terbalik: " << balik;
 
   return 0;
}