class Solution {
public:
    bool check(vector<int>& nums) {
        int count = 0;
        int n = nums.size();
        // count is to know the break point in array 
        // the main goal is to know the break point circularly
        for(int i=0 ; i<nums.size();i++){
            // Count places where the sorted order breaks (including last element to first)
            if(nums[i]>nums[(i+1)%n]){
                count++;
            }
        }
         return (count > 1)? false : true;
    }
};
