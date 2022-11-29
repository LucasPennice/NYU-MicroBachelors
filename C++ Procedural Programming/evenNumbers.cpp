//
//  main.cpp
//  evenNumbers
//
//  Created by Lucas Pennice on 21/09/2022.
//

#include <iostream>
using namespace std;

int main() {
    int limit;
    
    cout << "Please enter a positive integer: ";
    cin>>limit;
    
    for(int i = 1; limit != 0 ; i++){
        if(i%2==0){
            cout<<i<<endl;
            limit--;
        }
    }
    
    return 0;
}
