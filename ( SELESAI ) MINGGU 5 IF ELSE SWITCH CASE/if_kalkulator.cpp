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

        if(pilihan == '+'){
            cout << "Hasil Penjumlahan: " << angka1 << " + " << angka2 << " = " << angka1 + angka2;
        } else if(pilihan == '-'){
            cout << "Hasil Pengurangan: " << angka1 << " - " << angka2 << " = " << angka1 - angka2;
        } else if(pilihan == '*'){
            cout << "Hasil Perkalian: " << angka1 << " * " << angka2 << " = " << angka1 * angka2;
        } else if(pilihan == '/'){
            cout << "Hasil Pembagian: " << angka1 << " / " << angka2 << " = " << angka1 / angka2;
        } else if(pilihan == '%'){
            cout << "Hasil Modulus: " << angka1 << " % " << angka2 << " = " << angka1 % angka2;
        } else {
            cout << "Operasi tidak terdaftar / salah";
        }
    return 0;
}