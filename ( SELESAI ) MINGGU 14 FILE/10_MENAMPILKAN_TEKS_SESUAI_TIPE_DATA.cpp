#include <iostream> 
#include <fstream> // fstream ofstream ifstream
#include <string>
using namespace std;

int main()
{
    ifstream myfile;
    string output, buffer;
    bool isData = false;

    myfile.open("file.txt");

    while(!isData){
        getline(myfile,buffer);
        output.append("\n" + buffer);
        
        // jika menemukan string data hentikan dengan variabel isData = true
        if(buffer == "No Nama"){
            isData = true;
        }
    }

    cout << output << "\n";
    int untukAngka;
    string untukString;
    if(buffer == "No Nama")
    {
        isData = true;
        while(isData)
        {
            myfile >> untukAngka;
            cout << untukAngka << " ";
            myfile >> untukString;
            cout << untukString << endl;
            if(myfile.eof())
            {
                isData = false;
            }
        }
    }
}