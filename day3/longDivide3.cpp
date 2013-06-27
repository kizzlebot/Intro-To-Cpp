#include <iostream>
using namespace std;

int main(){
    //Variable that holds quotient, remainder
    int d = 47;
    int n = 0;
    int ans;
    int rem;
    //Input variable
    int userIn;

    cout << "Enter Numerator: " ;
    cin >> userIn;
    n = userIn;
    
    cout << "\nEnter Denominator: " ; 
    cin >> userIn;
    d = userIn;
    
    rem = n%d;
    ans = n/d;

    cout << "\n\tAnswer: " << ans << " Remainder:" << rem << endl;

    return 0;
}
