#include <iostream>
using namespace std;

main(){
    int angka, sum = 0;

    cout << "Untuk mengahiri program: " << -2 << "\n";
    cout << "Masukkan angka: "; cin >> angka;

    do{
       sum+=angka;
       cout << "Masukkan angka: "; cin >> angka; 
       
    } while(angka >= 0);

    cout << "\nTotal: " << sum;
}