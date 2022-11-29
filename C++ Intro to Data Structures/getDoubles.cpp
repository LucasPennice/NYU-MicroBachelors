#include <iostream>
using namespace std;

// void addOne(int* ptrNum){
//     *ptrNum += 1;
// }

double* getDoubles(int numDoubles){
    double *arr = new double[numDoubles];

    for (int i = 0; i < numDoubles; i++){
        arr[i] = float(i + 1) / 3;
    }

    return arr;
}

// int main(){
//     double* pointer = getDoubles(5);

//     for (int i = 0; i < 5; i++){
//         cout << pointer[i] << endl;
//     }

//     delete[] pointer;
// }