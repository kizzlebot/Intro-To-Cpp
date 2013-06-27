/*
    This program summates, sigma

*/

#include <iostream> 
using namespace std;

int main(){
    // Declare variable
    int n;
    // Initialize variable
    n = 0;
    // Output some prompts
    cout << "Enter upper boundary: ";
    // Get the input
    cin >> n;
    
    cout << "\n\nSummation" << endl;
    // for int i is less than given(n), execute, add one to i 
    for ( int i = 1, int sum = 0; i < n+1 ; i++ ) {
        // if i is same
        if ( i == n ){
            cout << "= " << 
            cout << "\n\t\tThe Sum of all numbers up to " << i << " is equal to: " << endl;
        }
        else
        { 
            cout << i << " + ";  
        }
    }

    return 0;
}
