#include <iostream>
using namespace std;

int main(){
    /*PART1
        use a nested count control loop that prints ten rows of ten stars
            only cout << "*"
    */
    /*PART2
        Change one line of code to make a triangle
            while ( j < 10 ) ------> while ( j < i )
    */
    int i = 0; 
    while (i < 10){
        int j = 0;
        while ( j < i){
            cout << "*" ; 
            j++;
        }
        cout << endl;
        i++ ;
    }
}
