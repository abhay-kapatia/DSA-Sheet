//80. Remove Duplicates from Sorted Array II

// Example 1:
// Input: nums = [1,1,1,2,2,3]
// Output: 5, nums = [1,1,2,2,3,_]
// Explanation: Your function should return k = 5, with the first five elements of nums being 1, 1, 2, 2 and 3 respectively.
// It does not matter what you leave beyond the returned k (hence they are underscores).

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int, int> mp;
        for (int i = 0; i < nums.size(); i++){
            mp[nums[i]]++;
        }
        int j = 0;
        for(auto i : mp){
            if(i.second==1){
                nums[j++] = i.first;
            }
            else if(i.second>=2){
                nums[j++] = i.first;
                nums[j++] = i.first;
            }
        }
        return j;
    }
};
