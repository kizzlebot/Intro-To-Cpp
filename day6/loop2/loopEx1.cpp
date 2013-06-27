#include <iostream>
using namespace std;

int main(){
    int i = 0;
    /*
        The While Loop
        ---------------------------------------------
        while (boolean statement){
            statements....;
        }
        ---------------------------------------------
        - while, check boolean, true? execute.
            false? break out.
        - inside a while loop, a variable can be declared. it will be cleared per iteration 
    */
    int j = 0;
    while (j < 10) {
        i = 2*j+1 ; 
        cout << i << endl;
        j++ ;
    }
    return 0;
}
