#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

/*
Number Mover:
    Prompt the user for five integers, and then write the numbers to a 
    file on one line called numberOut. Close the file
*/

int main(){
    // Open file for writing. Create an output stream
    ofstream outfile ;
    // Supply name
    outfile.open("numberOut");
    
    //Create an integer array to hold the five values
    int numAsk[5];

    //Starting from 0 to 4, but not five
    for (int i = 0; i < 5 ; i++){
        //Prompt user for an integer
        cout << "Enter Integer Digit No." << i+1 << " :";
        cin >> numAsk[i]; // Give it to numAsk[array i]
        cout << endl;

        outfile << numAsk[i] << " "; // Write to file
    }
    outfile << endl;
    outfile.close();

    //Create an Input Stream
    ifstream infile;
    infile.open("numberOut");
    //Define temp variables
    int x1,x2,x3,x4,x5;
    
    //Assign to variables
    infile >> " " >> x1 >> " " >> x2 >> " " >> x3 >> " " >>  x4 >> " " >> x5;
    //Output to stream
    cout << x1 << x2 << x3 << x4 << x5;
    //Close input stream
    infile.close();


    return 0;
}


