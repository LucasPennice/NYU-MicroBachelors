
#include <iostream>
using namespace std;

float avgoflst(int lst[], int size){
    int acum = 0;
    for(int i = 0 ; i < size ; i++){
        acum += lst[i];
    }
    
    return (double)acum / (double)size;
}
