class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int index = -1;
// step 1 : find the break point 
        for(int i=nums.size()-2; i>=0; i--){
            if(nums[i]<nums[i+1]){
                index = i;
                break;
            }
        }
// step 2 : if no break poijnt is there then just reverse it 
        if(index ==-1){
            reverse(nums.begin(), nums.end());
            return;
        }
// step 3 : find the just next bigger element then the index element
        for(int i = nums.size()-1; i>= 0; i--){
            if(nums[i]>nums[index]){
                swap(nums[i],nums[index]);
                break;
            }
        }
// step 4 : reverse the numbers after the index element as they already are in descending sort
// 2,1,5,4,3,0,0 step 2
// 2,3,5,4,1,0,0 step 3
// 2,3,0,0,1,4,5 step 4
        reverse(nums.begin()+index +1, nums.end());
        return;
    }
};
