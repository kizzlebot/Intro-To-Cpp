/*
    Demonstrates Operator Precedance
    NOTE: no cout statements
*/

#include <iostream>
using namespace std;

int main(){
    int x = 2+3*6; // x=20
    /* --Precedance--
    __2-Levels__
    1.) () * / %
    2.) + -

    - Level 1 has higher precedance over Level 2
    - Within in a level, left --> right
    */
    
    // example
    // 7*10-5%3*4+9 = ?
    // (7*10)-(5%3*9)+9 = ?
    // 70 - 18 + 9 = 71

    
    return 0;
}
