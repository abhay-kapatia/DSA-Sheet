// 1st approach is take mapping in a map and then count the map 
// 2nd approach is as the element is sorted take 2 pointer approach
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
             int count = 1;
             // as array is sorted, there is a scop of 2 pointer approach
             for(int j=1, i=0; j<nums.size(); j++){
                // just to check that the element is not equal
                if(nums[j] != nums[i]){
                    // replace the duplicate with unique element
                    nums[i+1] = nums[j];
                    count++;
                    i++;
                }
             }
             return count;
    }
};
