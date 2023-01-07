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
    string nama;
    nilaiMahasiswa nMhs;
};

  

main()
{
    // agar data sementara bisa disimpan letakkan menu: di bawah deklarasi 
    int index = 0;
    Mahasiswa Mhs[index];

    menu:


    cout << "Masukkan NIM  : "; cin >> Mhs[index].nim;
    cout << "Masukkan Nilai: "; cin >> Mhs[index].nMhs.nilai;

// tampil data
    system("cls");
    cout << "\nDaftar nilai mahasiswa\n";
    for(int i = 0; i <= index; i++)
    {
        cout << "\nNIM  : " << Mhs[i].nim << endl;
        cout << "Nilai: " << Mhs[i].nMhs.nilai << endl;
    }
    cout << endl;
    
// menambahkan nilai 
    index = index + 1;

    goto menu;
}