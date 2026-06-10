class Solution {
  public:
    void mergeSort(vector<int>& arr, int l, int r) {
        // code here
        if(l>=r){
            return;
        }
        //^base case
        int mid = l + (r - l) / 2;
        mergeSort(arr, l, mid);
        mergeSort(arr, mid+1, r);
        merge(arr, l, r, mid);
    }
    void merge(vector<int> &arr, int low, int high, int mid){
        vector<int> temp;
        int left = low;
        int right = mid+1;
        while(left<=mid && right<=high){
            if(arr[left]<arr[right]){
                temp.push_back(arr[left]);
                left++;
            }else{
                temp.push_back(arr[right]);
                right++;
            }
        }
        while(left<=mid){
            temp.push_back(arr[left]);
            left++;
        }
        while(right<=high){
            temp.push_back(arr[right]);
            right++;
        }
        for(int i = low ; i <= high ; i++){
            arr[i] = temp[i-low];
        }
    }
};
