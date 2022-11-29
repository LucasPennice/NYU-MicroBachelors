
#include <iostream>
#include <cstdlib>
using namespace std;

int maxabsinlst(int lst[], int size){
    int maxAbs = lst[0];
    
    for(int i = 0; i<size; i++){
        if(abs(lst[i]) > maxAbs){
            maxAbs = abs(lst[i]);
        }
    }
    
    return maxAbs;
}
