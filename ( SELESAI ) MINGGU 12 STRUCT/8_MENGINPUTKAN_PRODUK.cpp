#include <iostream>
#include <string>
using namespace std;

struct Produk {
  string namaProduk;
  float hargaProduk;
  int jumlahProduk;
};

int main() {
  Produk p;

  cout << "Masukkan nama produk  : ";
  getline(cin, p.namaProduk);

  cout << "Masukkan harga produk : ";
  cin >> p.hargaProduk;

  cout << "Masukkan jumlah produk: ";
  cin >> p.jumlahProduk;

system("cls");

  cout << "\nDetail Produk :" << endl;
  cout << "nama produk   : " << p.namaProduk << endl;
  cout << "harga produk  : " << p.hargaProduk << endl;
  cout << "jumlah produk : " << p.jumlahProduk << endl;

  return 0;
}
