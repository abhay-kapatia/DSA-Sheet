class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int l = INT_MIN;
        int sl = INT_MIN;
        for(int i = 0; i < arr.size(); i++){
            if(l<arr[i]){
                sl = l;
                l = arr[i];
            }else if(arr[i] < l && sl < arr[i]){
                sl = arr[i];
            }
        }
        return sl;
    }
};
