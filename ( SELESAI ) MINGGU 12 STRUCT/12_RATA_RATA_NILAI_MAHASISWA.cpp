#include <iostream>
#include <string>
using namespace std;

struct tinggiBadan {
  string nama;
  float nilai;
};

// int rata_rata(){
   
// }

main()
{
    int jumlah;
    system("cls");
    cout << "Masukkan jumlah orang: "; cin >> jumlah;
    tinggiBadan tBdn[jumlah];

    int rata_rata = 0;
    
    for(int i = 0; i < jumlah; i++){

        cout << "Masukkan nama  : ";
        cin >> tBdn[i].nama;

        cout << "Masukkan nilai : ";
        cin >> tBdn[i].nilai;

        rata_rata = rata_rata + tBdn[i].nilai ;
    }

        cout << "\n--- Data ---\n";
    for(int i = 0; i < jumlah; i++){

        cout << "\tNama         : " << tBdn[i].nama << endl;
        cout << "\tNilai        : " << tBdn[i].nilai << endl;
        cout << endl;

    }
        cout << "\nHasil rata - rata nilai: " << rata_rata / jumlah;
}
