
#include <iostream>
using namespace std;

/*
    Prompt the user for their age, If the age is 10,20,30,40, or 50 then print "Milestone!!!". Try to do this with a compound boolean expression
    rather than multiple if statements
*/
int main(){
    int age;
    age = 0;

    //Prompt user for age
    cout << "Enter Age: " ;
    cin >> age;
    
    if ((age > 50) || (age < 10)){
        if (age < 10){
            cout << "Too Young" << endl;
        }else
        {
            cout << "Damn, Your old as hell" << endl;
        }
    }
    else{
        if ( (age % 10)==0 ){
            cout << "MileStone!!!" << endl;
        }
        else
        {
            cout << "Not Quite there yet" << endl;
        }
    }

    return 0 ;
}
