
#include <iostream>
#include <string>
using namespace std;

float calculateCallCost(string dayCallStarted,int timeCallStarted,int callDurationInMinutes){
    
    if(dayCallStarted == "Sat" || dayCallStarted == "Sun"){
        return callDurationInMinutes * 0.15;
    }
    
    if(timeCallStarted > 800 && timeCallStarted < 1800){
        return callDurationInMinutes * 0.40;
    }
    
    return callDurationInMinutes * 0.25;
}

int main(int argc, const char * argv[]) {
    string dayCallStarted;
    int timeCallStarted, callDurationInMinutes;
    
    cout<<"Enter the day the call started at: ";
    cin>>dayCallStarted;
    
    cout<<"Enter the time the call started at (hhmm): ";
    cin>>timeCallStarted;
    
    cout<<"Enter the duration of the call (in minutes): ";
    cin>>callDurationInMinutes;
    
    printf("This call will cost $%.2f \n",calculateCallCost(dayCallStarted,timeCallStarted,callDurationInMinutes));
    
    return 0;
}
