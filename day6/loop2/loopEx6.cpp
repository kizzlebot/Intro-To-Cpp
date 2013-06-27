#include <iostream>
using namespace std;

int main(){
    int i = 0;
    string s = "";

    while ((s != "hi") && ( i < 5 )){
        cout << "Enter Hi to stop: ";
        cin >> s ; 
        i += 1;
    }

}
