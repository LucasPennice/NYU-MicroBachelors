
#include <iostream>
using namespace std;

int main() {
    int dollarQty,centsQty;
    const float QUARTER_VALUE = 25;
    const float DIME_VALUE = 10;
    const float NICKEL_VALUE = 5;
    
    cout<<"Please enter the amount of money to convert:"<<endl<<endl;
    cout<<"# of dollars: "; cin>>dollarQty;
    cout<<"# of cents: "; cin>>centsQty;
    
    int remainingCents = dollarQty * 100 + centsQty;
    int quarterQty = remainingCents / 25;
    remainingCents = remainingCents - quarterQty * QUARTER_VALUE;
    int dimesQty = remainingCents / 10;
    remainingCents = remainingCents - dimesQty * DIME_VALUE;
    int nickelQty = remainingCents / 5;
    remainingCents = remainingCents - nickelQty * NICKEL_VALUE;
    int pennyQty = remainingCents;
    
    cout<<"The coins are "<<quarterQty<<" quarters, "<<dimesQty<<" dimes, "<<nickelQty<<" nickels and "<<pennyQty<<" pennies"<<endl;

    return 0;
}
