/*

    Write a complete program that reads the three numbers stored in numFile.txt
    and adds them together. Outputs the sum to the monitor

*/
#include <iostream>
#include <fstream>
using namespace std;

int main(){
    int num1,num2,num3;
    ifstream infile ;
    infile.open("numFile.txt");
    infile >> num1 >> num2 >> num3;

    infile.close();
    

    if (num1 == 5){
        //cout << num1 << num2 << num3;
        cout << "Number: " << num2 << endl;
    }
    else{
        cout << "Number: " << num3 << endl;
    }
    
    return 0;

}
