#include <iostream>
using namespace std;

int main(){
    int d;
    string day ;

    cout << "What is the day (1-7)?: " ;
    cin >> d;
    
    //switch statement (similar to if statements)
    /*
    ----------------------------------------------------------------
        switch (int or char variable){
            case 1:
                statement1;
                statement2;
                break;
            case 2:
                statement1;
                statement2;
                break;
        }
    ----------------------------------------------------------------------
        - switch takes a variable argument
        - enclosed in curly braces
        - must use colon to end the case statement
        - default statement (aka "guard")
        - case statement can only take literals (int OR char) (NO STRINGS)
    */
    switch (d){
        case 1:
            day = "monday";
            break; // without the break statement, the next statements will evaluate. 
        case 2:
            day = "tuesday";
            break;
        case 3:
            day = "wednesday";
            break;
        case 4:
            day = "thursday" ; 
            break;
        case 5:
            day = "friday" ;
            break;
        case 6:
            day = "saturday";
            break;
        case 7:
            day = "monday";
            break;
        default:
            cout << "wtf?" << endl;
    }
    cout << "\n" << day;
    return 0;
}
