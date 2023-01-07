#include <iostream>
#include <string>
#include <ios> 
#include <limits>

using namespace std;

struct dBuku {
  string judulBuku;
  string namaPenulis;
  string tahunPembuatan;
  int harga;
  int hargaJual;
};

int main() {
  const int DATA_MAKSIMAL = 100;  // NILAI MAKSIMAL INPUT
  dBuku dBk[DATA_MAKSIMAL]; 
  int index = 0;  

  while (true) {
    cout << "-- Pilihan Menu --" << endl;
    cout << "1. Memasukkan Data Buku" << endl;
    cout << "2. Lihat Data Buku" << endl;
    cout << "3. Keluar" << endl; 
    cout << "Pilih: ";

    int pilihMenu;
    cin >> pilihMenu;

    switch(pilihMenu) {
        
      case 1:
        cout << "Masukkan Judul Buku      : ";
        cin>> dBk[index].judulBuku;

        cout << "Masukkan Nama Penulis    : ";
        cin>> dBk[index].namaPenulis;

        cout << "Masukkan Tahun Pembuatan : ";
        cin>> dBk[index].tahunPembuatan;

        cout << "Masukkan Harga           : ";
        cin >> dBk[index].harga;

        cout << "Masukkan Harga Jual      : ";
        cin >> dBk[index].hargaJual;

        index++;
        break;
        
      case 2:
        cout << "\nDaftar Data Buku" << endl;

        for (int i = 0; i < index; i++) {
          cout << "No: " << i+1 << endl;
          cout << "\tJudul Buku   : " << dBk[i].judulBuku << endl;
          cout << "\tNama Penulis : " << dBk[i].namaPenulis << endl; 
          cout << "\tJudul Buku   : " << dBk[i].tahunPembuatan << endl;
          cout << "\tNama Penulis : " << dBk[i].harga << endl;
          cout << "\tJudul Buku   : " << dBk[i].hargaJual << endl;
        }
        cout << endl;
        break;

      case 3:
        cout << "Program selesai" << endl;
        return 0; 
        break;

      default:
        cout << "Pilihan Menu tidak tersedia, pilih menu lagi" << endl;
        break;
    }
  }

  return 0;
}
