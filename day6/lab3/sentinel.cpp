#include <iostream> 
using namespace std;

int main(){ 
    /* count the number of lines in a file*/
    ifstream in;
    in.open("linefile");

    //!!!!!! A STREAM IS A BOOLEAN VALUE!
    if (!in){               // if 'in' stream has nothing
        cout << "File not found" ; //print file not found
    }
    else{ // if 'in' stream isn't "not empty" (it must mean it has stream) 
        while (in){ //while 'in' has streams
            string s ;  //define s for tmp
            getline(in,s); //get the line and assign to s
            cout << s << endl; //print
        }
    }
    in.close();
}
