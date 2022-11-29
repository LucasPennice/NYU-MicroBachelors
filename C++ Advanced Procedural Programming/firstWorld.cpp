
#include <iostream>
#include <string>
using namespace std;

string firstword(string s){
    int firstSpaceIndex = s.find(" ");
    
    return s.substr(0,firstSpaceIndex);
}
