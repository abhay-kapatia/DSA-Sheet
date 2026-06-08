void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
    
}

//pointer int * p -> is a pointer initialization
//pointer *p is the value of the pointer
//p is the address stored in it 
//&p is the address of the pointer

void selectionSort(int arr[], int n) {
    for(int i = 0; i < n - 1; i++) {
        int mini = i;

        for(int j = i + 1; j < n; j++) {
            if(arr[j] < arr[mini]) {
                mini = j;
            }
        }

        swap(&arr[i], &arr[mini]);
    }
}
