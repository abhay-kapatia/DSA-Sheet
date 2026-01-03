// Rotate array by D in right
// Input: nums = [1,2,3,4,5,6,7], k = 3
// Output: [5,6,7,1,2,3,4]

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k = k % nums.size(); // to cover the scenerio where K > n 
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin()+k,nums.end());
    }
};

// Rotate array by D in left
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k = k % nums.size(); // to cover the scenerio where K > n
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin()+k,nums.end());
        reverse(nums.begin(), nums.end());
    }
};
