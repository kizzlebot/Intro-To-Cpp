#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

int main(){
    string line1,line2,line3,line4;
    ifstream infile;
    infile.open("lineFile");

    getline(infile,line1);
    getline(infile,line2);
    getline(infile,line3);
    getline(infile,line4);

    cout << line2 << endl;
    cout << line4 << endl;
}
