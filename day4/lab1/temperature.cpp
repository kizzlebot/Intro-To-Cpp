/*
    Write a program that prompts for temperature
    if temp >= 60, cool
    if else  60 < t < 80, fine
    if t > 80- hot as fuch

*/ 
#include <iostream>
using namespace std;

int main(){

    int temp;
    cout << "\n\n\tEnter the Current Temperature: ";
    cin >> temp;
    
    if (temp <= 60){
        cout << "Weather: Cool" << endl;
    }

    else if (temp > 60){
        //
        if (temp <= 80){
            cout << "Weather: Fine" << endl;
        }
        //else
        else{
            cout << "Weather: HOT!!!" << endl; 
        }
    }
    
    
    
    return 0;
}

