#include <iostream>
#include <fstream>
using namespace std;
/*
    Can I input AND output to the same file at the same time with 2 different variables?
        -- NO, only one (input/output) at a time.
*/ 

int main(){
    //NEW function
    ifstream infile ; // ifstream streamVarIn ;
                      // ofstream streamVarOut ; 
    
    //Open file for reading
    infile.open("myInputFile.txt");
    
    //Declare variables
    string i1;
    string i2;
    string i3;
    
    //new stream manipulation using getline
    // Use getline to get stream of the file read from textfile, and send/assign it to a variable
    getline(infile,i1) ; 
    getline(infile,i2) ;  //SYNTAX: getline(stream,stringVar);
    getline(infile,i3) ; 
    
    //Close the stream
    infile.close();
    cout << i1 << "\n" << i2 << "\n" << i3 << endl; 

    return 0;
}
