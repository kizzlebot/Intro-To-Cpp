/*
    Calculate Quadratic formula given a, b, c


    NOTE: DO NOT USE ">>" (extraction operator) and getline(cin,str) in the same program
*/
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    // Variables holding a, b, and c for quadratic formula
    
    float a, b ,c;
    a = 1.0, b = 1.0, c = -6.0;
    cout << "\n\tEnter a: ";
    cin >> a;
    cout << "\n\tEnter b: ";
    cin >> b;
    cout << "\n\tEnter c: "; 
    cin >> c ; 
    //Two Variables Hold answer for the two x's
    // int x1,x2;
    // x1 = x2 = 0;
    // float x_1,x_2;
    // x_1 = 0.0;
    // x_2 = 0.0;
    
    float x_1, x_2;
    x_1 = x_2= 0.0;
    int x1 ,x2 ;
    x1 = x2 = 0;
    // if answer is not a whole number..
    if ( (abs(((-1*b+sqrt((pow(b,2)-4*a*c)))/(2*a)-int((-1*b+sqrt((pow(b,2)-4*a*c)))/(2*a))) < 1)) &  (abs((-1*b-sqrt((pow(b,2)-4*a*c)))/(2*a)-int((-1*b-sqrt((pow(b,2)-4*a*c)))/(2*a)) < 1))){
        //float x_1;
        x_1 = (-1*b+sqrt((pow(b,2)-4*a*c)))/(2*a) ; //Keep it a float 
        //Output
        cout << "\nRoot #1: " << x_1 << endl;
        
        //float x_2; 
        x_2 = (-1*b-sqrt((pow(b,2)-4*a*c)))/(2*a) ; //Keep it a float 
        //output
        cout << "\nRoot #2: " << x_2 << endl;
        

        //OUTPUT IN formula
        // if x_1 is less than 0,
        if (x_1 < 0.0){
            cout << "\n(x+" << x_1*-1 << ")"; //We're gonna need a plus sign
        }else { cout << "\n(x" << x_1*-1 << ")";} //if not, it'll be added auto
        if (x_2 < 0.0){
            cout << "(x+" << x_2*-1 << ")";
        }else { cout << "(x" << x_2*-1 << ")";}
        
    }else {    
        int x1;
        //calculate x1  --> decimals cut off w/ assumption of being correct
        x1 = int((-1*b+sqrt((pow(b,2)-4*a*c)))/(2*a));
        //Output x1
        cout << "\nRoot #1: " << x1 << endl;
        int x2;
        //calculate x2  --> decimals cut off w/ assumption of being correct
        x2 = int((-1*b+sqrt((pow(b,2)-4*a*c)))/(2*a));
        //output
        cout << "\nRoot #2: " << x2 << endl;
        
        //OUTPUT IN formula
        // if x_1 is less than 0,
        if (x_1 < 0){
            cout << "\n(x+" << x_1*-1 << ")"; //First factorization (x+n)
        }else { cout << "(x" << x_1*-1 << ")";}

        if (x_2 < 0){
            cout << "(x+" << x_2*-1 << ")"; //
        }else { cout << "(x" << x_2*-1 << ")";}

    }
    /*
    // if what-would-be for x2 is not a whole number integer..
    if ( (-1*b-sqrt((pow(b,2)-4*a*c)))/(2*a)-int((-1*b-sqrt((pow(b,2)-4*a*c)))/(2*a)) != 0 ){
        float x_2; 
        x_2 = (-1*b-sqrt((pow(b,2)-4*a*c)))/(2*a) ; //Keep it a float 
        //output
        cout << "\nRoot #2: " << x_2 << endl;
    */
    //}else {    
        //int x2;
        //calculate x2  --> decimals cut off w/ assumption of being correct
       // x2 = int((-1*b+sqrt((pow(b,2)-4*a*c)))/(2*a));
        //output
      //  cout << "\nRoot #2: " << x2 << endl;
    


    //calculate x1 first --> decimals cut off w/ assumption of being correct
    //  x1 = int((-1*b+sqrt((pow(b,2)-4*a*c)))/(2*a));
    //calculate x2 second --? decimals cut off w/ assumption of being corect
    //  x2 = int((-1*b-sqrt((pow(b,2)-4*a*c)))/(2*a));
    
    //OUTPUT
    // cout << "Root #1: " << x1 << endl;
    // cout << "Root #2: " << x2 << endl;
    
    return 0;
}
