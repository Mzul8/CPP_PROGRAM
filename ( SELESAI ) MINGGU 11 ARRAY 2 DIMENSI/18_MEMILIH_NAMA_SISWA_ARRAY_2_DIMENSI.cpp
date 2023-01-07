#include <iostream>
using namespace std;

main()
{
    int pilihan;
    string namaSiswa[6][2] = {
        {"Mahri","Zul"},
        {"Fendri"," "},
    };


    cout << "Masukkan absen: ";
    cin >> pilihan;

    switch (pilihan)
    {
    case 1:
        cout << namaSiswa[0][0];
    break;
    case 2:
        cout << namaSiswa[0][1];
    break;
    case 3:
        cout << namaSiswa[1][0];
    break;
    
    default:
        cout << "Nama tidak ditemukan";
    break;
    }
}