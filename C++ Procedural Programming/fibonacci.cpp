//
//  main.cpp
//  evenNumbers
//
//  Created by Lucas Pennice on 21/09/2022.
//

#include <iostream>
using namespace std;

int main() {
    int limit,result;
    int n_2 =1;
    int n_1 = 1;
     
    cout << "Please enter a positive integer greater than 1: ";
    cin>>limit;
    
    for(int pos = 0; pos != limit ; pos++){
        if(pos==0 || pos==1){
            cout<<1<<endl;
        }else{
            result = n_1 + n_2;
            n_2 = n_1;
            n_1 = result;
            cout<<result<<endl;
        }}
    
    return 0;
}