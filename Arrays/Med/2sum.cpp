// 2-sum problem
// as array was not sorted We have used hashmap approach but there was 2 - pointer approach too
// which require array to be sorted if the indeces are at left and right position
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int y = 0;
        unordered_map <int,int> mp;
        for(int i=0; i<nums.size(); i++){
            y = target - nums[i];
            if(mp.find(y)!=mp.end()){
                // mp.find() returns you the pointer not an object thats why we are using -> instead of .
                // return{mp.find(y)->second,i};
                return {mp[y],i};
            }
            mp[nums[i]]=i;
        }
        return {};
    }
};
