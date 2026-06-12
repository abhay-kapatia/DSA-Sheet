class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j =-1; // initialization + to find the case where there is no zero;
        // find the first occurance of zero
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==0){
                j = i;
                break;
            }
        }
        // if no zero just return
        if (j==-1) return;
        // place the 2nd pointer just next toi the zero one
        // then keeping on swapping
        for(int i = j+1; i<nums.size(); i++){
            if(nums[i]!=0){
                swap(nums[i], nums[j]);
                j++;
            }
        }
    }
};
