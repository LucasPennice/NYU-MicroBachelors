#include <iostream>
#include <iomanip>

using namespace std;

float getBmiPounds(float weightPounds, float heightInches){
    float weight = weightPounds * 0.453592;
    float height = heightInches * 0.0254;
    return weight / (height*height);
}

int main() {
    float userHeightInches,userWeightPounds;
    
    cout<<"Please enter weight in pounds: ";
    cin>>userWeightPounds;
    cout<<"Please enter height in inches: ";
    cin>>userHeightInches;
    cout<<"BMI is: "<< fixed << setprecision(2) << getBmiPounds(userWeightPounds,userHeightInches)<<endl;
    return 0;
}
