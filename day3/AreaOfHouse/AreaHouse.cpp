/*
Write a Program that computes the area of a house that 3 rooms
*/

#include <iostream>
using namespace std;

int main(){
    //room[no] is the area of each room
    double totalArea = 0;
    //userInput flags next room or prompt again
    char userInput;
    //doneFlag == 3 means print totalArea accumulated
    short doneFlag = 0;
    
    double length,width = 0.0;
    //while doneFlag indicates l,w has not been recieved for each room
    while (doneFlag != 3 && (length == 0) && (width == 0)){
        // local variable
        length,width = 0.0;
        
        // if doneFlag == 0
        if (doneFlag == 0){
            // Ask user for input of length and width for room(doneFlag+1) 1
            cout << "Please enter Length for one wall in room " << doneFlag+1 << " :";
            cin >> length;
            cout << "\nPlease enter Length for another wall in room " << doneFlag+1 <
< " :";
            cin >> width;
            
            //Print length and width and ask if satisfied
            cout << "\nLength: " << length << "\nWidth: " << width << endl;
            cout << "Continue(y/n)? " ;
            cin >> userInput;
            if (userInput == 'y'){ 
                // totalArea = totalArea + length*width
                totalArea += length*width;
                // doneFlag+=1
                doneFlag+=1;
            }
            else{ break;}
        }
        // else if doneFlag == 1
            // Ask user for input of length and width for room(doneFlag+1) 2
            // totalArea = totalArea + length*width
            // doneFlagh+=1
        // else if doneFlag == 2
            // Ask user for input of length and width for room(doneFlagh+1) 3
            // totalArea = totalArea + length*width
            // doneFlag+=1
        // else
            // Error muhfuh
    }
}
