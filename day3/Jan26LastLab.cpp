/*
    Write a program that prompts for the number of minutes afternoon and outputs the hours and minutes that have passed after noon
    Name: James Choi

*/
#include <iostream> 
#include <cmath>
using namespace std;

int main(){
    //Define and initialize
    int userIn = 0;
    int remainMIN = 0;
    int wholeHOUR = 0;

    //Prompt user for input
    cout << "Please Enter the Number of Minutes that have passed after noon (12:00PM): " ;
    cin >> userIn;
    
    //Calculation
    wholeHOUR = userIn / 60 ;
    remainMIN = userIn % 60 ;

    /*
    while ((remainMIN <= 0) || (wholeHOUR <=0)
        //Prompt user for input
        cout << "Please Enter the Number of Minutes that have passed after noon: ";
        cin >> userIn ; 
        
            //Calculation
            wholeHOUR = userIn / 60 ; 
            remainMIN = userIn % 60 ; 

    */
    cout << "\n\t--------------------The Time is--------------------";
    cout << "\n\tHours: " << wholeHOUR << "  Minutes: " << remainMIN ;
    cout << "\n" ; 
    return 0;
}
