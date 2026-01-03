class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        if (nums.size() <= 1) return nums;

        vector<int> temp(nums.size());
        mergeSort(nums, 0, nums.size() - 1, temp);
        return nums;
    }

private:
    void mergeSort(vector<int>& nums, int low, int high, vector<int>& temp) {
        if (low >= high) return;

        int mid = low + (high - low) / 2;
        mergeSort(nums, low, mid, temp);
        mergeSort(nums, mid + 1, high, temp);
        merge(nums, low, mid, high, temp);
    }

    void merge(vector<int>& nums, int low, int mid, int high, vector<int>& temp) {
        int l = low;
        int r = mid + 1;
        int idx = low;

        while (l <= mid && r <= high) {
            if (nums[l] <= nums[r]) {
                temp[idx++] = nums[l++];
            } else {
                temp[idx++] = nums[r++];
            }
        }

        while (l <= mid) {
            temp[idx++] = nums[l++];
        }

        while (r <= high) {
            temp[idx++] = nums[r++];
        }

        for (int i = low; i <= high; i++) {
            nums[i] = temp[i];
        }
    }
};
