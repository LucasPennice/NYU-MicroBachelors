#include <iostream>
using namespace std;

int main() {
    int quarterQty,dimeQty,nickelQty,pennyQty;
    float result;
    const float QUARTER_VALUE = 0.25;
    const float DIME_VALUE = 0.1;
    const float NICKEL_VALUE = 0.05;
    const float PENNY_VALUE = 0.01;
    
    cout<<"Please enter the number of coins: "<<endl;
    cout<<"# of quarters: "; cin>>quarterQty;
    cout<<"# of dimes: "; cin>>dimeQty;
    cout<<"# of nickels: "; cin>>nickelQty;
    cout<<"# of pennies: "; cin>>pennyQty;
    
    result = quarterQty * QUARTER_VALUE + dimeQty * DIME_VALUE + nickelQty * NICKEL_VALUE + pennyQty * PENNY_VALUE;
    
    int dollars = (int)result;
    int cents = (int)((result-(int)result)*100);
    
    cout<<"The total is "<<dollars<<" dollars and "<<cents<<" cents"<<endl;
    
    return 0;
}