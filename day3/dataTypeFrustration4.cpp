/*
    Some data-type handing
        -floats
        -casting

*/ 

#include <iostream>
using namespace std;

int main(){

//Will cause error in calculations!

//INVALID calcululation techniques
    int i = 5;
    int j = 7;
    cout << i/j << endl ; //OUTPUT: 0
    int k = i/j;
    cout << k << endl; //OUTPUT: 0 (right evaluated before left)
    float l = i/j;
    cout << l << endl; //OUTPUT: 0.0 
    


// Retaining Accuracy
    /*
        Method 1
    */
    float ii = i;
    float jj = j;
    float f = ii/jj;
    cout << f << endl; // OUTPUT: 8.??? (accurate)

    /*
        Method 2: Casting
    */
    f = float(i)/float(j); //Temporarily make i, and j, a floating point
    cout << f << endl; // OUTPUT: 8.??? (accurate)
//INVALID Casting
    f = float(i/j);
    cout << f << endl; // 0.0 
    

}

