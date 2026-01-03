class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int, int> mp;
        for (int i = 0; i < nums.size(); i++){
            mp[nums[i]]++;
        }
        int j = 0;
        for(auto i : mp){
            nums[j++] = i.first;
        }
        return j;
    }
};
