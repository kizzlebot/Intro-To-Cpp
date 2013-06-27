/*
    Request a temperature, as an int, and then output the patient's condition according to this table:
        Below 99                        - Good
        99 and up but not including 101 - Fair
        101 up to but not including 103 - Serious
        103 and up                      - Critical
*/
#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

int main(){
    //Define and Initialize Variables
    int userIn;
    userIn = 0;

    //Prompt for Temperature
    cout << "Enter Patient's Temperature: ";
    cin >> userIn;
    
    cout << "Patient's Condition: " ; 
    //x < 98, 98 < x < 101, 100< x < 103, 103 < x
    //---------/98/---/100/----/102/--->
    if ( userIn < 99 ){
        cout << "Good" << endl;
    }
    else {
        if ( userIn < 103 ) {
        }
    }

    return 0 ;

}
