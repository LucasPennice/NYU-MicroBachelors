#include <iostream>
#include <string>
#include <string.h>
using namespace std;

bool is_palindrome(int test)
{
    if(test < 10){
        return true;
    }else{
        string gamer = to_string(test);
        if(gamer.back() == gamer.front()){
            gamer.pop_back();
            string newNumberInString= gamer.substr(1);
            int newNumber = std::stoi(newNumberInString);
            return is_palindrome(newNumber);
        }else{
           return false;
        }

    }
}
