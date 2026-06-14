class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0;
        int ele = 0;
        //Moore's Voting Algorithm 
        for(int i=0 ; i<nums.size(); i++){
            if(count == 0){
                ele = nums[i];
            }
            if(nums[i] == ele){
                count ++;
            }else{
                count --;
            }
        }
        count = 0;
        // Verifying it once
        for(int i=0 ; i<nums.size(); i++){
            if(nums[i]==ele){
                count++;
            }
        }
        //Returning the answer
        if(count>(nums.size())/2){
            return ele;
        }
        return 0;
    }
};
