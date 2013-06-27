#include <iostream>
#include <fstream>
using namespace std;
/*
    This program demonstrates the use of reading from a file to directly outputting to monitor
        input/output filestream
            - ifstream -- input filestream 
            - ofstream -- output filestream
*/ 

int main(){
    //NEW 
    ifstream infile ; // ifstream streamVarIn ;
                      // ofstream streamVarOut ; 
    //
    infile.open("myInputFile.txt");
    
    //Declare variables
    string i1;
    string i2;
    string i3;
    
    //new stream manipulation using getline
    // Use getline to get stream of the file read from textfile, and send/assign it to a variable
    getline(infile,i1) ; 
    getline(infile,i2) ;  //SYNTAX: getline(stream,stringVar);
    getline(infile.i3) ; 

    cout << i1 << "\n" << i2 << "\n" << i3 << endl; 

    return 0;
}
