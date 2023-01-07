#include <iostream>
#include <fstream>
#include <string>
using namespace std; 

int main(){
    ifstream vfile;
    string teks;
    bool istrue = false; 
    vfile.open("file.txt");
    // while(!istrue){
    //     vfile >> teks;
    //     cout << teks << "\n";
    //     if(vfile.eof()){
    //         istrue = true;
    //     }
    // }

    while(!vfile.eof())
    {
        vfile >> teks;
        cout << teks << "\n";
    } 
    vfile.close();
}

/*
    1 #include <fstream>
    2 deklarasi ifstream myfile
    3 myfile.open("namafile.txt");
    4 deklarasi 2 variabel tipe string teks, output
    5 getline(myfile, buffer), kenapa buffer, jika tidak akan mengeluarkan hasil yang sama, #include <string>
    6 output / variabel ke dua, output.append(buffer/variabel pertama);
    7 cout << output / variabel ke dua;
*/