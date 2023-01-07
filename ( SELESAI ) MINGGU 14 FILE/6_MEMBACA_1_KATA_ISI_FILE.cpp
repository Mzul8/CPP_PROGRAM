#include <iostream>
#include <fstream>
#include <string>
using namespace std; 

int main(){
    ifstream vfile;
    string teks; 
    vfile.open("file.txt");

        vfile >> teks;
        cout << teks << "\n";
        
    vfile.close();
}