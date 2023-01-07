#include <iostream>
using namespace std;

int pengurangan();

int main()
{
    pengurangan();
}

int pengurangan(){
    int angka,pengurang;

    cout << "Masukkan angka "; cin >> angka;
    cout << "Masukkan angka-2 "; cin >> pengurang;
    cout << "Hasil pengurangan "<< angka << " - " << pengurang << " = " << angka - pengurang; 
}
