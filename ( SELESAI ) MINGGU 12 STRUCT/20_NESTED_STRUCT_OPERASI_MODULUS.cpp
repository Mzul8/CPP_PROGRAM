#include <iostream>
#include <string>
using namespace std;

struct nilai
{
    int nilai;
};

struct modul
{
    nilai nla;
};

  

main()
{
    // agar data sementara bisa disimpan letakkan menu: di bawah deklarasi 
    int index = 0;
    int nilai;
    modul pNj[index];

    menu:

    float total = 0;

    cout << "Masukkan Nilai    : "; cin >> nilai;
    cout << "Masukkan Modulus  : "; cin >> pNj[index].nla.nilai;
    

// tampil data
    system("cls");
    cout << "\nDaftar nilai\n";
    for(int i = 0; i <= index; i++)
    {
        cout << "Nilai: " << nilai % pNj[i].nla.nilai << endl;
        nilai = nilai % pNj[i].nla.nilai;
    }
    cout << endl;
    cout << "Hasil Modulus : " << nilai;
    cout << endl;
    
// menambahkan nilai 
    index = index + 1;

    goto menu;
}