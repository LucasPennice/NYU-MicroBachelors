#include <iostream>
using namespace std;

int linear_search(int search_value, int lst[], int elements){
    int numberOfComparisons = 0;

    for (int i = 0; i < elements; i++){
        numberOfComparisons++;
        
        if (lst[i] == search_value)
        {
            return numberOfComparisons;
        }
    }

        return numberOfComparisons;
}

// int main(){
//     int lst[] = {19, 2, 20, 1, 0, 18};

//     cout << linear_search(20, lst, 6) << endl;

//     return 0;
// }