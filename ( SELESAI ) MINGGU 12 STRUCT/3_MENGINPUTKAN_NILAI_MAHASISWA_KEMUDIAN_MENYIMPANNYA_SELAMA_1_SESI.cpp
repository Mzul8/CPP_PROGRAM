#include <iostream>
using namespace std;

struct nilaiMahasiswa
{
    int nim;
    int nilai;
};
  

main()
{
    // agar data sementara bisa disimpan letakkan menu: di bawah deklarasi 
    int index = 0;
    nilaiMahasiswa nMhs[index];

    menu:


    cout << "Masukkan NIM  : "; cin >> nMhs[index].nim;
    cout << "Masukkan Nilai: "; cin >> nMhs[index].nilai;

// tampil data
    system("cls");
    cout << "\nDaftar nilai mahasiswa\n";
    for(int i = 0; i <= index; i++)
    {
        cout << "\nNIM  : " << nMhs[i].nim << endl;
        cout << "Nilai: " << nMhs[i].nilai << endl;
    }
    cout << endl;
    
// menambahkan nilai 
    index = index + 1;

    goto menu;
}