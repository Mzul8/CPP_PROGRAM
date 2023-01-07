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

  int jumlahProduk;
  cout << "Masukkan jumlah Produk:"; cin >> jumlahProduk;

  Produk p[jumlahProduk];

    for(int i = 0; i < jumlahProduk; i++){

        cout << "Masukkan nama produk  : ";
        cin >> p[i].namaProduk;

        cout << "Masukkan harga produk : ";
        cin >> p[i].hargaProduk;

        cout << "Masukkan jumlah produk: ";
        cin >> p[i].jumlahProduk;

        cout << endl;
    }

system("cls");

    for(int i = 0; i < jumlahProduk; i++){

    cout << "\nDetail Produk :" << endl;
    cout << "nama produk   : " << p[i].namaProduk << endl;
    cout << "harga produk  : " << p[i].hargaProduk << endl;
    cout << "jumlah produk : " << p[i].jumlahProduk << endl;

    }
  return 0;
}
