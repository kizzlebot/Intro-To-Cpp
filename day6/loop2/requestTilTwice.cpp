#include <iostream>
using namespace std;

/*
    request a number until the user enters the same number twice
*/
int main(){
    int input ; 
    int prev ; 
    prev = -1;
    input = 0;

    //while input doesnt equal previous
    while (input != prev){
        //Prompt user for input
        cout << "\n\nEnter Input: " ;
        cin >> input ; 
        if (input != prev){
            prev = input ; 
            input = 0;
        }
    }
    cout << "\n\nYou've entered: " << prev << " twice." << endl;
    return 0;
}
