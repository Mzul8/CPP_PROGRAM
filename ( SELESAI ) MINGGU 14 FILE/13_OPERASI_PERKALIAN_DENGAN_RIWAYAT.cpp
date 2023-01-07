#include <iostream> 
#include <fstream> // fstream ofstream ifstream
using namespace std;

int main()
{
    int angka,pengali;
    ofstream hasilPerkalian;

    hasilPerkalian.open("hasilPerkalian.txt",ios::app);

    cout << "Masukkan angka "; cin >> angka;
    cout << "Masukkan angka-2 "; cin >> pengali;
    cout << "Hasil Perkalian "<< angka << " * " << pengali << " = " << angka * pengali; 

    hasilPerkalian << "Hasil Perkalian "<< angka << " * " << pengali << " = " << angka * pengali << "\n"; 

    hasilPerkalian.close();
}
