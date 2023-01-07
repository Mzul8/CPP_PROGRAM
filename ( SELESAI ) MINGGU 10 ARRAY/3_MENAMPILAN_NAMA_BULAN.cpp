#include <iostream>
using namespace std; 

main(){
    int pilihanbulan;
    string bulan[] = {"januari","februari","maret","april","mei","juni","juli","agustus","september","oktober","novermber","desember"};

    cout << "Masukkan angka bulan: ";cin >> pilihanbulan;
    cout << bulan[pilihanbulan - 1];
}