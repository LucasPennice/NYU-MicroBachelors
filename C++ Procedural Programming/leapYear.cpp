//
//  main.cpp
//  leapYear
//
//  Created by Lucas Pennice on 18/09/2022.
//

#include <iostream>
#include <cstdlib>
using namespace std;

bool isLeapYear(int year){
    bool isException = false;
    
    if(year%100==0 && year%400==0)
        isException = true;
    
    return year%4==0 && (year%100!=0 || isException);
}

int main(int argc, char *argv[]) {
    
    int year = atoi(argv[1]);
    
    if(isLeapYear(year))
        cout<<year<<" was a leap year";
    else
        cout<<year<<" was not a leap year";
    
    
    
    
    return 0;
}
