#include <iostream>
#include <string>
using namespace std;

struct tinggiBadan {
  string nama;
  float tinggibadan;
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

        cout << "Masukkan nama         : ";
        cin >> tBdn[i].nama;

        cout << "Masukkan tinggi badan : ";
        cin >> tBdn[i].tinggibadan;

        rata_rata = rata_rata + tBdn[i].tinggibadan ;
    }

        cout << "\n--- Data ---\n";
    for(int i = 0; i < jumlah; i++){

        cout << "Nama         : " << tBdn[i].nama << endl;
        cout << "Tinggi badan : " << tBdn[i].tinggibadan << endl;

    }
        cout << "\nHasil rata - rata tinggi badan: " << rata_rata / jumlah << " cm";
}
