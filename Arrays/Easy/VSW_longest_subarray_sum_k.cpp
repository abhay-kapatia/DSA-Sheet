class Solution {
public:
    int longestSubarray(vector<int>& arr, int k) {
        int n = arr.size();
        int i = 0, j = 0;
        long long sum = 0;
        int maxLen = 0;

        while (j < n) {
            sum += arr[j];

            while (i <= j && sum > k) {
                sum -= arr[i];
                i++;
            }
          
            if (sum == k) {
                maxLen = max(maxLen, j - i + 1);
            }

            j++;
        }

        return maxLen;
    }
};
