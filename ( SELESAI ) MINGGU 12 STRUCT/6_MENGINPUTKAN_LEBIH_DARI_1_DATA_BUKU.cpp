#include <iostream>
using namespace std;

struct dataBuku
{
    string JudulBuku;
    string NamaPenulis;
    string TahunTerbit;
};

main()
{
    system("cls");

    int jumlahBuku;
    cout << "Masukkan jumlah buku: "; cin >> jumlahBuku;
    dataBuku dBK[jumlahBuku];

    for(int i = 0; i < jumlahBuku; i++)
    {
        cout << endl;
        cout << "Masukkan Nama Penulis  : "; cin >> dBK[i].NamaPenulis;
        cout << "Masukkan Judul Buku    : "; cin >> dBK[i].JudulBuku;
        cout << "Masukkan Tahun Terbit  : "; cin >> dBK[i].TahunTerbit;
        cout << endl;
    }

    system("cls");

    for(int i = 0; i < jumlahBuku; i++)
    {
        cout << endl;
        cout << "Nama Penulis    : " << dBK[i].NamaPenulis << endl;
        cout << "Judul Buku      : " << dBK[i].JudulBuku << endl;
        cout << "Tahun Terbit    : " << dBK[i].TahunTerbit << endl;
    }
}