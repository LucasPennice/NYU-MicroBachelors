//
//  main.cpp
//  countingEvenAndOddNumbersLab
//
//  Created by Lucas Pennice on 18/09/2022.
//

#include <iostream>
using namespace std;

int main() {
    int n1,n2,n3,n4;
    int odds=0,even=0;
    
    cout<<"Please enter 4 positive integers, separated by a space: ";
    cin>>n1>>n2>>n3>>n4;
    
    if(n1%2==1)
        odds+=1;
    else
        even+=1;
    if(n2%2==1)
        odds+=1;
    else
        even+=1;
    if(n3%2==1)
        odds+=1;
    else
        even+=1;
    if(n4%2==1)
        odds+=1;
    else
        even+=1;
    
    if(odds<even)
        cout<<"more evens";
    else if(even<odds)
        cout<<"more odds";
    else
        cout<<"same number of evens and odds";
    
    return 0;
}
