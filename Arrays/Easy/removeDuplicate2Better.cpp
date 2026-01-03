// 80. Remove Duplicates from Sorted Array II

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0;
        bool count = true;
        for(int j=1 ; j<nums.size(); j++){
            if(nums[i]==nums[j] && count==true){
                i++;
                nums[i] = nums[j]; 
                count = false;
            }else
            if(nums[i]!=nums[j]){
                i++;
                count = true;
                nums[i] = nums[j];
            }
        }
        return i+1;
    }
};
