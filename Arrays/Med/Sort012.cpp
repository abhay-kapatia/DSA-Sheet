// this algorithm is also known as dutch flag algorithm
// [2,0,2,0,1,1,2]
// ^  ^          ^
// low mid       high
// we have kept <= instead of just < because we have to
// process high element to present at last
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low = 0, mid = 0, high = nums.size()-1;
        // we have kept <= instead of just < because we have to
        // process high element to present at last
        while(mid<=high){
            if(nums[mid]==0){
                swap(nums[mid],nums[low]);
                low++;
                mid++;
            }else if(nums[mid]==1){
                mid++;
            }else{
                swap(nums[mid], nums[high]);
                high--;
            }
        }
    }
};
