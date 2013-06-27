/*

    Write a complete program that prompts for a number(1-7), then output the corresponding day of the week

*/
#include <iostream>
using namespace std;


int main(){
    string days[] = {"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
    int userIn = 0;
    
    while ((userIn < 1) || (userIn > 7)){
        cout << " Please enter a number between 1 and 7: " ;
        cin >> userIn;
    
        if ((userIn > 0) && (userIn <  8)){
            cout << "Today is: " << days[userIn-1] << endl ;     
        }
        else{
            cout << "Error" << endl;
            userIn = 0;
        }
    }
    return 0; 
}
