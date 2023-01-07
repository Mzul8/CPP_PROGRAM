#include <iostream>
#include <fstream>
using namespace std;

main(){
    ofstream myfile;
    int angka, range = 1;

    myfile.open("deretangka.txt", ios::app);
    cout << "Masukkan angka: "; cin >> angka;
    myfile << "\n";
    while(range <= angka){
        cout << range << " ";
        myfile << " " << range++;
    }
    myfile.close();
}