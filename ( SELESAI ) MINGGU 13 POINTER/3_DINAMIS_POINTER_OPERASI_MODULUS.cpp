#include <iostream>
using namespace std;

// membuat tipe data mod 
struct Mod{
    int i;
    int j;
};

// mod itu sudah jadi tipe data buatan
int Modulus(){
     Mod mod;

    // inputan user
    cout << "Masukkan angka: "; cin >> mod.i;
    cout << "Masukkan modulus: ";cin >> mod.j;

    // operasi
        int *iP = &mod.i, *jP = &mod.j;

        cout << "Hasil Modulus: " << *iP << " % " << *jP << " = " << *iP % *jP;

}

int main()
{
    Modulus();
}