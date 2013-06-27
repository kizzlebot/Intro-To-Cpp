#include <iostream>
using namespace std;

/*
    prompt the user for 5 ints in a loop
    print one integer that is largest
*/
int main(){
    int index = 0; 
    int input = 0;
    int largest = 0; 
    
    cout << "\n\n\nEnter five Digits" << endl;
    //while index != 5
    while (index != 5){

        //Prompt user for input
        cout << "Digit #" << index+1 << ": " ;
        cin >> input ;

        //if given input is greater than the current largest
        if (input > largest){
            //change the largest to the given.
            largest = input ; 
        }

        index++ ;
    }
    cout << "\n\n\nThe largest of the five is: " << largest << endl << endl << endl;
}
