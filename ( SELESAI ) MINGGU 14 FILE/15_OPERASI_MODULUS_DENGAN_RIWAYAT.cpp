#include <iostream> 
#include <fstream> // fstream ofstream ifstream
using namespace std;

int main()
{
    int angka,modulus;
    ofstream hasilModulus;

    hasilModulus.open("hasilModulus.txt",ios::app);

    cout << "Masukkan angka "; cin >> angka;
    cout << "Masukkan angka-2 "; cin >> modulus;
    cout << "Hasil Modulus "<< angka << " % " << modulus << " = " << angka % modulus; 

    hasilModulus << "Hasil Modulus "<< angka << " % " << modulus << " = " << angka % modulus << "\n"; 

    hasilModulus.close();
}
