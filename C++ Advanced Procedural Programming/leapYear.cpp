
#include <iostream>
#include <cstdio>
using namespace std;


bool isleapyear(int year){
    bool isException = false;
    
    if(year%100==0 && year%400==0)
        isException = true;
    
    return year%4==0 && (year%100!=0 || isException);
}