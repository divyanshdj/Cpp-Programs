#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream oFile;
    oFile.open("example.txt"); // To Create a File [ C++ FILE HANDLING]
    cout<<"File Created!";
    oFile.close();
    return 0;
}
/* To update the data in File [ C++ FILE HANDLING ]

    ofstream oFile;
    oFile.open("example.txt");
    oFile<<"This is FIRST File";
    cout<<"Data Updated on File!";
    oFile.close(); 

/* To Copy the File in Another File [ C++ FILE HANDLING ]

    ifstream iFile;
    ofstream oFile;
    char str;
    iFile.open("example.txt");
    oFile.open("ex.txt");
    while(iFile.get(str))
    {
        oFile.put(str);
    }
    iFile.close();
    oFile.close();

/* To Delete the File in [ C++ FILE HANDLING ]

    int v = remove("ex.txt");
    if(v==0){ cout<<"File Deleted!"; } else{ cout<<"Not Deleted"; }
