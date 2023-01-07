#include <iostream>
#include <string>
using namespace std;

struct nilaiMahasiswa
{
    int nilai;
};

struct Mahasiswa
{
    int nim;
    nilaiMahasiswa nMhs;
};

  

main()
{
    // agar data sementara bisa disimpan letakkan menu: di bawah deklarasi 
    int index = 0;
    Mahasiswa Mhs[index];

    menu:

    float total = 0;

    cout << "Masukkan NIM  : "; cin >> Mhs[index].nim;
    cout << "Masukkan Nilai: "; cin >> Mhs[index].nMhs.nilai;

// tampil data
    system("cls");
    cout << "\nDaftar nilai mahasiswa\n";
    for(int i = 0; i <= index; i++)
    {
        cout << "\nNIM  : " << Mhs[i].nim << endl;
        cout << "Nilai: " << Mhs[i].nMhs.nilai << endl;
        total = total + Mhs[i].nMhs.nilai;
    }
    cout << endl;
    cout << "Nilai total Mahasiswa: " << total / index;
    cout << endl;
    
// menambahkan nilai 
    index = index + 1;

    goto menu;
}