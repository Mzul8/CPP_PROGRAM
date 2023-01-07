#include <iostream>
using namespace std;

struct nilaiMahasiswa{

    long long nim;
    int nilai;
};

main()
{
    int index = 0;
    nilaiMahasiswa nMhs[index];

    int pilihmenu;
    
    system("cls");
    menu:
    cout << "-- Pilihan Menu --\n";
    cout << "1. Memasukkan Nilai\n";
    cout << "2. Melihat Nilai\n";
    cout << "3. Keluar\n"; 
    cout << "Pilih: ";cin >> pilihmenu;

    switch(pilihmenu)
    {
        case 1:
            cout << "Masukkan NIM  : ";cin >> nMhs[index].nim;
            cout << "Masukkan Nilai: ";cin >> nMhs[index].nilai;

            index = index + 1;
            system("cls");
            goto menu;
        break;
        
        case 2:
            system("cls");
            cout << "\nDaftar nilai mahasiswa\n";

            for(int i = 0; i < index; i++)
            {
                cout << "No: " << i+1 << endl;
                cout << "\tNIM  : "<< nMhs[i].nim << endl;
                cout << "\tNilai: "<< nMhs[i].nilai << endl; 
            }
            cout << endl;
            system("pause");
            goto menu;
        break;

        case 3:
            cout << "Program selesai\n";
        break;

        default:
            cout << "Pilihan Menu tidak tersedia, pilih menu lagi\n";
            system("pause");
            system("cls");
            goto menu;
        break;
    }
}