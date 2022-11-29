
#include <iostream>
#include <string>
using namespace std;

int main(int argc, const char * argv[]) {
    string userInput;
    
    cout<<"Enter an odd length string: ";
    getline(cin,userInput);
    
    int middleIndex = userInput.length() / 2;
    
    cout<<"Middle character: "<<userInput[middleIndex]<<endl;
    cout <<"First half: "<<userInput.substr(0, middleIndex)<<endl;
    cout <<"Second half: "<<userInput.substr(middleIndex + 1, userInput.length())<<endl;
    
    return 0;
}
