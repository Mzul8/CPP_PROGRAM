#include <iostream>
using namespace std;

main(){
    char pilihan;
    int angka1, angka2;

    cout << "============ Program Kalkulator ============\n";
    cout << "Masukkan Pilihan Operasi : + , - , * , / , % \n";
    cin >> pilihan;

    cout << "\nMasukkan angka pertama: ";cin >> angka1;
    cout << "\nMasukkan angka kedua: ";cin >> angka2;

        switch(pilihan){
            case '+':
                cout << "Hasil penjumlahan: " << angka1 << " + " << angka2 << " = " << angka1 + angka2;
            break;

            case '-':
                cout << "Hasil pengurangan: " << angka1 << " - " << angka2 << " = " << angka1 - angka2;
            break;

            case '*':
                cout << "Hasil perkalian: " << angka1 << " * " << angka2 << " = " << angka1 * angka2;
            break;

            case '/':
                cout << "Hasil pembagian: " << angka1 << " / " << angka2 << " = " << angka1 / angka2;
            break;

            case '%':
                cout << "Hasil modulus: " << angka1 << " % " << angka2 << " = " << angka1 % angka2;
            break;

            default:
                cout << "Operasi tidak terdaftar";
            break;
        }

    return 0;
}