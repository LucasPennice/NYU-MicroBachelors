
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

float bmimetricf(int weight, float height){
    float result = float(weight) / (height*height);
    return result;
}

string getBmiStatus(float bmi){
    if(bmi<18.5){
        return "Underweight";
    }
    if(bmi>= 18.5 && bmi < 24.9){
        return "Normal";
    }
    if(bmi >= 25 && bmi < 29.9){
        return "Overweight";
    }
    return "Obese";
}

float roundTwoDecimals(float value){
    return  round( value * 100.0 ) / 100.0;
}


int main(int argc, const char * argv[]) {
    int weight;
    float height;
    
    cout<<"Please enter weight in kilograms: ";
    cin>>weight;
    
    cout<<"Please enter height in meters: ";
    cin>>height;
    
    float bmi = roundTwoDecimals(bmimetricf(weight, height));
    
    cout<<"BMI is: "<<bmi<<", Status is "<<getBmiStatus(bmi)<<endl;
    
    return 0;
}