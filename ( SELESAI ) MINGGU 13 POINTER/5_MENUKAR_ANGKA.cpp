#include <iostream>
using namespace std;

void ditukar(int *a, int *b)
{
    int swap = *a;
    *a = *b;
    *b = swap;
}

main(){
    int pertama,kedua;

    cout << "Masukkan angka pertama: "; cin >> pertama;
    cout << "Masukkan angka kedua  : "; cin >> kedua;
    system("cls");

    cout << "----------------- SEBELUM DI TUKAR -----------------" << endl;
    cout << "Angka pertama: " << pertama << endl;
    cout << "Angka kedua  : " << kedua << endl;

    ditukar(&pertama, &kedua);
    cout << "----------------- SESUDAH DI TUKAR -----------------" << endl;
    cout << "Angka pertama: " << pertama << endl;
    cout << "Angka kedua  : " << kedua << endl;
}