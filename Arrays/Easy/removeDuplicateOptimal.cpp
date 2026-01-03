//remove duplicate using 2 pointer approach 
//[1 1 2 3 3 4]
///j i
///j   i        ---> j!=i so assign it value of i
///[1 2 2 3 3 4]
///[  j i       ---> new positions

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j=0;
        for(int i=1 ; i<nums.size(); i++){
            if(nums[j]!=nums[i]){
                j++;
                nums[j] = nums[i];
            }
        }
        return j+1;
    }
};
