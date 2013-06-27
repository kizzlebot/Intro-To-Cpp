/*
    Write a complete program that prompts the user for 4 test scores
    and outputs the average to a file called ave.txt

*/
#include <iostream>
#include <fstream>
using namespace std;

int main(){
    int s1,s2,s3,s4;
    cout << "Enter the score 1: " ;
    cin >> s1;

    cout << "Enter the score 2: " ;
    cin >> s2;

    cout << "Enter the score 3: " ;
    cin >> s3;

    cout << "Enter the score 4: " ;
    cin >> s4;
    
    float average;

    ofstream outfile;
    outfile.open("ave.txt");
    outfile << (s1+s2+s3+s4)/4 << endl;
    outfile.close();
    average = (s1+s2+s3+s4)/(4.0);
    return 0;

}
