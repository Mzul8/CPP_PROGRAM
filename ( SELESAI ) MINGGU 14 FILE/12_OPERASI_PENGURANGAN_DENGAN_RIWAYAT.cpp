#include <iostream> 
#include <fstream> // fstream ofstream ifstream
using namespace std;

int main()
{
    int angka,pengurang;
    ofstream hasilPengurangan;

    hasilPengurangan.open("hasilPengurangan.txt",ios::app);

    cout << "Masukkan angka "; cin >> angka;
    cout << "Masukkan angka-2 "; cin >> pengurang;
    cout << "Hasil Pengurangan "<< angka << " - " << pengurang << " = " << angka - pengurang; 

    hasilPengurangan << "Hasil Pengurangan "<< angka << " - " << pengurang << " = " << angka - pengurang << "\n"; 

    hasilPengurangan.close();
}
