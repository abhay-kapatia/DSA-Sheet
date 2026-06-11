class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int largest = INT_MIN;
        int secondLargest = INT_MIN;
        // these should be INT_MIN just to be safe as if arr is [10,5,10] then it will cause problem
        for(int i=0; i<arr.size();i++){
            if(arr[i]>largest){
                secondLargest = largest;
                largest = arr[i];
            }
            // in second check, strictly it shouldn't be equal to largest 
            if(arr[i]>secondLargest && arr[i]!=largest){
                secondLargest = arr[i];
            }
        }
        // if second largest doesn't exist it should be -1 as in [10,10,10]
        return (secondLargest == INT_MIN) ? -1 : secondLargest;
    }
};
