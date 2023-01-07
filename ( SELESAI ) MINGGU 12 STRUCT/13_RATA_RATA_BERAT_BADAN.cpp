#include <iostream>
#include <string>
using namespace std;

struct beratBadan {
  string nama;
  float beratbadan;
};

main()
{
    int jumlah;
    system("cls");
    cout << "Masukkan jumlah orang: "; cin >> jumlah;
    cout << endl;
    beratBadan bBdn[jumlah];

    int rata_rata = 0;
    
    for(int i = 0; i < jumlah; i++){

        cout << "Masukkan nama         : ";
        cin >> bBdn[i].nama;

        cout << "Masukkan berat badan  : ";
        cin >> bBdn[i].beratbadan;

        rata_rata = rata_rata + bBdn[i].beratbadan ;
    }

        cout << "\n--- Data ---\n";
    for(int i = 0; i < jumlah; i++){

        cout << "Nama         : " << bBdn[i].nama << endl;
        cout << "berat badan  : " << bBdn[i].beratbadan << endl;

    }
        cout << "\nHasil rata - rata berat badan: " << rata_rata / jumlah << " kg";
}
