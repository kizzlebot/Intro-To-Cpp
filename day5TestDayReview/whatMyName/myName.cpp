#include <iostream>
using namespace std;

int main(){
    /*
        Prompt for a name. If the name is not suzy, john, or bill, then output "Nobody I know"
    */ 
    string name;
    cout << "Enter a name: ";
   cin >> name ; 
    if ((name != "suzy")||||(name!="john")||||(name!="bill")){
        cout << "Nobody I know" << endl;
    }else
    {
        cout << " I know!" ;
    }
    return 0;
}
