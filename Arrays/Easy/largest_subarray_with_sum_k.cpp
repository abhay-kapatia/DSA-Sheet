class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        // map for mapping sum and index
        unordered_map <long long, int> preSumMap;
        long long sum = 0; // for sum
        int maxLen = 0; // for calculating max length
        for(int i=0; i<nums.size(); i++){
            sum += nums[i];
            // if base condition reached
            if(sum == k){
                // calculate the the maxlen with current length
                maxLen = max(maxLen , i+1);
            }
            // if x is the sum and we have subarray sum as k then we can calculate for (x-k) too
            long long rem = sum - k;
            if(preSumMap.find(rem) != preSumMap.end()){
                // calculating length of the remaining subarray
                int len = i - preSumMap[rem];
                // then calculating the max length
                maxLen = max(maxLen, len);
            }
            // checking if the entry is already is there in the map it doesn't get duplicated
            if(preSumMap.find(sum) == preSumMap.end()){
                // adding a new entry
                preSumMap[sum] = i;
            }
        }
        return maxLen;
    }
};
