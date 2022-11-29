#include <iostream>
#include <string>
using namespace std;

string remainingwords(string s){
    int firstSpaceIndex = s.find(" ");
    
    return s.substr(firstSpaceIndex + 1 ,s.length());
    
    
}
