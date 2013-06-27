#include <iostream>
using namespace std;

int main(){
    string str ; 
    str = "";

    while (str != "hi") {
        cout << "Enter \"hi\" to stop: " ; 
        getline(cin,str);
    }
    cout << "broken out of loop!" << endl;
    return 0 ;
}
