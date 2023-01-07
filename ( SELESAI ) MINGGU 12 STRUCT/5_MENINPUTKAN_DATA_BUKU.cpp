#include <iostream>
using namespace std;

struct dataBuku
{
    string JudulBuku;
    string NamaPenulis;
    string TahunTerbit;
};

dataBuku masuk()
{
    dataBuku dBK;

    cout << "Masukkan Nama Penulis  : "; cin >> dBK.NamaPenulis;
    cout << "Masukkan Judul Buku    : "; cin >> dBK.JudulBuku;
    cout << "Masukkan Tahun Terbit  : "; cin >> dBK.TahunTerbit;

    return dBK; 
}

dataBuku tampil(dataBuku dBK)
{
    cout << endl;
    cout << "Nama Penulis    : " << dBK.NamaPenulis << endl;
    cout << "Judul Buku      : " << dBK.JudulBuku << endl;
    cout << "Tahun Terbit    : " << dBK.TahunTerbit << endl;
}

main()
{
    system("cls");
    tampil(masuk());
}