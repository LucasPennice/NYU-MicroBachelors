
int maxinlst(int arr[],int arrSize){
    int maxValue = arr[0];
    
    for(int idx = 0 ; idx < arrSize ; idx++){
        if(arr[idx]>maxValue){
            maxValue = arr[idx];
        }
    }
    
    return maxValue;
}

