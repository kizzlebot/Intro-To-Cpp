//#include <iostream>
#include <fstream> // new preprocessor <fstream>
using namespace std;


int main(){
    //new data-type (ofstream)

    // Declare
    ofstream out ; // out is a object
                   // out is the 'linkage' between the program and disk file
                   
    // open file for writing, if not there, its created
    out.open("myOutputFile.txt") ; // once a file is opened, only need to talk to stream (in this case out)

    // send string to out object ( a stream )
    out << " have a nice day" << endl;
    // close file
    out.close() ;

    return 0 ;
}

