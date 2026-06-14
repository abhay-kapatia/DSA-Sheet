// find the subarray with largest sum and return it as the answer.
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxsum = nums[0];
        int sum = 0;
        int length =0, start  =0;
        for (int i = 0; i < nums.size(); i++){
            sum += nums[i];
            maxsum = max(maxsum , sum);
            length = i - start + 1;
            // we can also use <= too but we are not using it as it is not hurting 
            // the future result as any how we are making it 0 in next step 
            if (sum<0)
            {
                sum = 0;
                start = i;
            }
        }
        return maxsum;
    }
};
