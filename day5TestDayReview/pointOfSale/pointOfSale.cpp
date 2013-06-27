#include <iostream>
#include <iomanip>
using namespace std;

/*
    POINT OF SALE APPLICATION
    -Prompt for a price and quantity and then output the total sale.
    -Also, prompt for a sales tax rate between 0 and 1. Then modify the calcuations
     to account for the sales tax.  Error checking is not required (e.g. .05 for 5%)
    -If the customer is nice enough to buy more than 100, discount the price by 5%
*/
int main(){
    float price;
    int quantity;
    float tax;
    float total;
    price = 0.0;
    quantity = 0;
    tax = 0.0;
    total = 0.0;

    //Ask for price of product and quantity simultaneously
    cout << "Please Enter the Price of product and Quantity: $" ; 
    cin >> price >> quantity;
    cout << endl;
    
    //Ask for Tax Rate
    cout << "Please Enter the sales tax rate in \"Between 0 and 1\" form: ";
    cin >> tax;
    //Add one to tax for original price + sales rate
    tax+=1;
    //If the customer buys more than 100 
    if (quantity > 100){
        //discount the price by 4%
        tax-=0.05;
        //Thank customer
        cout << "Thank You for your business!" << endl;
    }
    cout << setprecision(2) << fixed ;
    cout << "Total: $" << (float)price*(1+tax)*quantity << endl;

    return 0;
}
