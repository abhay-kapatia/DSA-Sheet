void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
    
}

void bubbleSort(int* arr, int n) {
    // Code here
    for (int i = n-1; i>0; i--){
        int didSwap = 0;
        for (int j = 0; j<n-1; j++){
            if(arr[j]>arr[j+1]){
                didSwap=1;
                swap(&arr[j], &arr[j+1]);
            }
        }
        if(!didSwap){
            break;
        }
    }
}
