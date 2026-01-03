//if all elements are positive (sliding window/ 2 pointer optimal)
class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        // code here
        int n = arr.size();
        int i = 0;
        int j = 0;
        int sum = 0, maxlen = 0, maxlenfin = 0; 
        while(j<n){
            sum = sum + arr[j];
            maxlen ++;
            while(sum > k)
            {
                sum = sum - arr[i];
                i++;
            }
            if(sum < k){
                j++;
            }
            else if(sum == k){
                maxlenfin = max(maxlen, maxlenfin);
            }
        }
        return maxlenfin;
    }
};
