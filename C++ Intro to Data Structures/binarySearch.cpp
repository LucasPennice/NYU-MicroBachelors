#include <iostream>
using namespace std;

int binary_search(int search_value, int lst[], int elements){
    int start = 0 , end = elements, middle = elements / 2,numberOfIterations = 0;

    while(start <= end){
        middle = (end + start) / 2;
        numberOfIterations++;

        if (lst[middle] == search_value)
        {
            return numberOfIterations;
        }
        if(lst[middle] > search_value){
            end = middle - 1;
        }
        else
        {
            start = middle + 1;
        }
    }

    return numberOfIterations;
}

// int main(){
//     int lst[] = {0, 1, 2, 18, 19, 20, 25};

//     cout << binary_search(20, lst, 7) << endl;

//     return 0;
// }