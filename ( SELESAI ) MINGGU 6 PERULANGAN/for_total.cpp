#include <iostream>
using namespace std;

main(){
    int sum = 0, angka;
    
    cout << "Masukkan angka: ";cin >> angka;
    for(sum = 0; angka >= 0; angka++)
    {
        sum+= angka;
        cout << "Masukkan angka: ";cin >> angka;
    }   
    cout << "\nTotal: " << sum;
}