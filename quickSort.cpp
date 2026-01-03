class Solution {
  public:
    void quickSort(vector<int>& arr, int low, int high) {
        // code here
        if(low<high){
            int pIndex = partition(arr, low, high); // partition Index where the pivot is correctly placed
            quickSort(arr, low, pIndex - 1);
            quickSort(arr, pIndex + 1, high);
        }
    }

  public:
    int partition(vector<int>& arr, int low, int high) {
        // code here
        int pivot = arr[low]; // could be any element
        int i = low;
        int j = high;
        while(i<j){ // till i >= j
            while(arr[i] <= pivot && i<= high - 1){
                i++; // first element which is greater than pivot
            }
            while(arr[j] >= pivot && j >= low + 1){
                j--; // first element which is leaser than pivot
            }
            if(i < j) swap(arr[i], arr[j]);   
        }
        swap(arr[low], arr[j]); // for placing pivot at right location
        return j;
    }
};
