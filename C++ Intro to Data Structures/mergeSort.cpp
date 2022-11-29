void merge(int arr[], int left, int middle, int right){
    int idxLeft = left;
    int idxRight = middle + 1;
    int resultIdx = 0;
    int* newArr ;
    newArr = new int[right - left + 1 ];

    while(idxLeft <= middle && idxRight <= right){

        if(arr[idxLeft] < arr[idxRight]){
            newArr[resultIdx] = arr[idxLeft];
            idxLeft++;
        }else{
            newArr[resultIdx] = arr[idxRight];
            idxRight++;
        }
        resultIdx++;
    }

    while(idxLeft <= middle){
        newArr[resultIdx] = arr[idxLeft];
        idxLeft++;
        resultIdx++;
    }

    while(idxRight <= right){
        newArr[resultIdx] = arr[idxRight];
        idxRight++;
        resultIdx++;
    }

    

        for (int i = 0; i < right; i++)
        {
            arr[i + left] = newArr[i];
        }

}

