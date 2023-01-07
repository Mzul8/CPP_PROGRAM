#include <iostream> 
#include <fstream> // fstream ofstream ifstream
using namespace std;

int main()
{
    int angka,pembagi;
    ofstream hasilPembagian;

    hasilPembagian.open("hasilPembagian.txt",ios::app);

    cout << "Masukkan angka "; cin >> angka;
    cout << "Masukkan angka-2 "; cin >> pembagi;
    cout << "Hasil Pembagian "<< angka << " / " << pembagi << " = " << angka / pembagi; 

    hasilPembagian << "Hasil Pembagian "<< angka << " / " << pembagi << " = " << angka / pembagi << "\n"; 

    hasilPembagian.close();
}
