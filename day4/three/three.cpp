/*
    Write a complete program that prompts the user for 
    three lines and writes them to a file called "theThreeLines.txt"
*/

#include <fstream> // for ofstream function
#include <iostream> // since prompt is used, iostream is needed
using namespace std;

int main(){
    
    cout << "Input 3 lines: " << endl;
    string s1, s2, s3;

    // SYNTAX: getline(fromWhichStream,assignTo?)
        // cin is a stream from keyboard
    getline(cin,s1);
    getline(cin,s2);
    getline(cin,s3);

    
    // Declare object
    ofstream out ;
    // Create theThreeliner.txt file, and associate a stream ( out ), with that file
    out.open("theThreeLiner.txt");

    // send to stream, followed by endl
    out << s1 << endl;
    out << s2 << endl;
    out << s3 << endl;
    
    //Close stream
    out.close();

    // return the promised integer
    return 0;
}
