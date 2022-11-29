//
//  main.cpp
//  bmiMetricLab
//
//  Created by Lucas Pennice on 17/09/2022.
//

#include <iostream>
#include <iomanip>

using namespace std;

float getBmi(float weight, float height){
    return weight / (height*height);
}

int main() {
    float userHeight,userWeight;
    
    cout<<"Please enter weight in kilograms: ";
    cin>>userWeight;
    cout<<"Please enter height in meters: ";
    cin>>userHeight;
    cout<<"BMI is: "<< fixed << setprecision(2) << getBmi(userWeight,userHeight)<<endl;
    return 0;
}