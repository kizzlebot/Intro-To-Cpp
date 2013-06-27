#include <iostream>
using namespace std;

int main(){
    string s; 
    int i = 0;// index

    while ( i < 5 ){
        cout << "Give me a string: " ;
        getline(cin,s) ; 
        cout << s << endl;
        i = i+1;
    }
}
