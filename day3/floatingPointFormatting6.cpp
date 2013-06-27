#include <iostream> 
#include <iomanip>
using namespace std;

int main(){
    float xPrice = 4.72;
    float yPrice = 113.10;
    float total = xPrice + yPrice ;

    cout << "-------Looks like shit--------";
    cout << "xPrice: " << xPrice << endl;
    cout << "yPrice: " << yPrice << endl; //this shit looks like garbage b/c the decimal doesnt line up
    cout << "....." << endl;

    /*------FORMATTING TECHNIQUES------
        -Floating Point formatting - Doesnt change how the numbers are stored, only determines how they
        outputted.
        
    */
    

    float f = 2.0; // a float should always include a decimal
    float g = 238.4755;

//Example
    cout << f << endl; // OUTPUT: 2

    //HOW TO Tell cout to include decimal from now on, (SYNTAX: cout << showpoint ; )
    cout << showpoint ; // showpoint being sent to cout doesnt output anything
                        // showpoint is a configuration message to the cout message
    cout << "cout << showpoint: " << f << endl; // OUTPUT: 2.000000...
    
    //HOW TO Prevent Scientific Notation (SYNTAX: cout << fixed ; )
    cout << fixed; // also a configuration message to cout
    cout << "cout << fixed: " << f << endl; 

    //HOW TO Set a Precision for decimal output (LIBRARY:<iomanip> ; SYNTAX: cout << setprecision(2); )
    //-set # of decimal spaces to use
    cout << setprecision(2) ;
    cout <<"Using cout << setprecision(2): " << f << endl;

    //HOW TO set width for output (LIBRARY: <iomanip> ; SYNTAX: cout << setw(n) << var << endl; )
    //NOTE: set-width (setw(n)) must be included for each and every output
    // - applies to variable or number provided to the right hand side
    /*
        x = 1.234567;
        cout << setprecision(2); 
        cout << setw(10) << x << endl;
        ---->
        ---->
           _ _ _ _ _ _ _ _ _ _ (10 spaces)
           _ _ _ _ _ _ _ _ _ _ (rows)
        ---->
           _ _ _ _ _ _ 1 . 2 3
            
    */
    return 0;


}
