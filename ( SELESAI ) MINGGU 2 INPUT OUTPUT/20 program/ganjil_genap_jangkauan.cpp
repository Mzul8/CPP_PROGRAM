#include <iostream>
using namespace std;

int main(){

    int pilihan,angka;

    cout << "Masukkan pilihan: \n\t1 untuk bilangan ganjil\n\t2 untuk bilangan genap\n";
    cin >> pilihan;

    cout << "Masukkan range atau jangkauan angka: ";
    cin >> angka;

    if(pilihan == 1){

        for(int i = 1; i <= angka; i++){
            if(i % 2 != 0){
                cout << i << " ";
            }
        }

    } else if(pilihan == 2){

        for(int i = 1; i <= angka; i++){
            if(i % 2 == 0){
                cout << i << " ";
            }
        }

    }


    return 0;
}
