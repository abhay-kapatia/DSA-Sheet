class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map <long long, int> preSumMap;
        long long sum = 0;
        int count =0;
        for(int i=0; i<nums.size(); i++){
            sum += nums[i];
            if(sum == k){
                count++;
            }
            count += preSumMap[sum - k];
            preSumMap[sum]++;
        }
        return count;
    }
};
