#include <iostream>
using namespace std;

int main(){
    //Declare + Initialize Variables and Constants
    int x;
    x = 1;
    /*Declare + Initialization (Alternate form)*/
    int y = 7; 
    int z;
    

    //Output the value of x, then endline
    cout << "\n\n\tThe Value of x: " << x << endl;
    cout << "\tThe Value of y: " << y << endl;
    z = x + y;
    cout << "\tx + y = " << z << endl;
    //Change the Value in x
    x = 2;
    //Output the Value of x, then endline
    cout << "\n\n\tThe Value of new x: " << x << endl;
    cout << "\tThe Value of y: " << y << endl;
    z = x + y;
    cout << "\tx + y = " << z << endl;
 
    string name = "James";
    cout << "\t" << name << endl;

    return 0;
}
