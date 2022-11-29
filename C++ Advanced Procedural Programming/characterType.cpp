
#include <iostream>
#include <string>
using namespace std;

void evaluateCharacter(char character){
    if(character >= 'a' && character <= 'z'){
        cout<<character<<" is  a lower case  letter."<<endl;
    }else if(character >= 'A' && character <= 'Z'){
        cout<<character<<" is  an  upper case  letter."<<endl;
    }else if(character >= '0' && character <= '9'){
        cout<<character<<" is  a digit."<<endl;
    }else{
        cout<<character<<" is  a non-alphanumeric  character."<<endl;
    }
    
}

int main(int argc, const char * argv[]) {
    string character;
    
    cout<<"Enter a character: ";
    cin>>character;
    
    evaluateCharacter(character[0]);
    
    return 0;
}