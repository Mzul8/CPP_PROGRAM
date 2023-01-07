#include <iostream>
#include <string>
using namespace std;

struct Produk {
  string namaProduk;
  float hargaProduk;
  int jumlahProduk;
};

int main() {

  system("cls");

  const int DATA_MAKSIMAL = 100;  // NILAI MAKSIMAL INPUT 
  Produk p[DATA_MAKSIMAL];
  int index = 0;  
  int pilihanmenu;

  while (true) {
    cout << "-- Pilihan Menu --" << endl;
    cout << "1. Memasukkan Data Produk" << endl;
    cout << "2. Lihat Data Produk" << endl;
    cout << "3. Keluar" << endl; 
    cout << "Pilih: "; cin >> pilihanmenu;
    
    switch(pilihanmenu){

    case 1:
        cout << "Masukkan nama produk  : ";
        cin >> p[index].namaProduk;

        cout << "Masukkan harga produk : ";
        cin >> p[index].hargaProduk;

        cout << "Masukkan jumlah produk: ";
        cin >> p[index].jumlahProduk;

        cout << endl;
        index++;
    break;

    system("cls");

    case 2:
        cout << "\nDetail Produk :" << endl;
        for(int i = 0; i < index; i++){

        cout << "\tNama produk   : " << p[i].namaProduk << endl;
        cout << "\tHarga produk  : " << p[i].hargaProduk << endl;
        cout << "\tJumlah produk : " << p[i].jumlahProduk << endl;
        cout << endl;

        }
        system("pause");
        system("cls");
    break;

    case 3:
        cout << "Program selesai" << endl;
        return 0; 
    break;

    default:
        cout << "Pilihan Menu tidak tersedia, pilih menu lagi" << endl;
        break;
  return 0;
    }
}
}
