#include <iostream>
#include <string>
using namespace std;

struct nilai
{
    int nilai;
};

struct penjumlahan
{
    nilai nla;
};

  

main()
{
    // agar data sementara bisa disimpan letakkan menu: di bawah deklarasi 
    int index = 0;
    penjumlahan pNj[index];

    menu:

    float total = 0;

    cout << "Masukkan Nilai: "; cin >> pNj[index].nla.nilai;

// tampil data
    system("cls");
    cout << "\nDaftar nilai\n";
    for(int i = 0; i <= index; i++)
    {
        cout << "Nilai: " << pNj[i].nla.nilai << endl;
        total = total + pNj[i].nla.nilai;
    }
    cout << endl;
    cout << "Nilai total : " << total;
    cout << endl;
    
// menambahkan nilai 
    index = index + 1;

    goto menu;
}