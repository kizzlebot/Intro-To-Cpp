#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

/*
    MOVE TO THE END
    - Using your editor, create a one line file with:
            Have a nice day
      called nicefile.  Then write a program that reads niceFile and 
      outputs the same thing back to niceFile, with the first word at the end.
*/
int main(){
    //Define/Initialize
    ifstream infile;
    string x1,x2,x3,x4;
    string output;
    //Open File
    infile.open("niceFile");

    //assign to variables separately
    infile >> x1 >> x2 >> x3  >> x4 ;
    //rearrange
    output = x2 + " " + x3 + " " + x4 + " " +  x1 ; 

    //Output
    cout << output << endl;
    infile.close();

    //Open output stream
    ofstream outfile;
    outfile.open("niceFile");
    outfile << output; 
    return 0 ;
}
