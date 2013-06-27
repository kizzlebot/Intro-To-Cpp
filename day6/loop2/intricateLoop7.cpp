#include <iostream>
#include <fstream>
using namespace std;

int main(){
    /*
        read 5 numbers from file.
        and compute the average
    */
    //Define an array of five
    int sum = 0 ;
    //define and open file
    ifstream infile ;
    infile.open("nums");
    //Loop to fill array
    for (int i = 0 ; i < 5 ; i++){
        int g ; 
        infile >> g ;  
        //Accumulate the sum
        sum+=g ; 
    }
    //close infile
    infile.close();
    //sum becomes average when divided by 5, save some space
    sum= sum/5.0 ; 
    cout << "\n\nsum: " << sum ; 
}
