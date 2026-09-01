class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end()); 
        
        int low = 0;
        int high = nums.size() - 1;
        int first_idx = -1;
        
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] == target) {
                first_idx = mid; 
                high = mid - 1; 
            } else if (nums[mid] > target) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        
        vector<int> ans;
        if (first_idx != -1) {
            while (first_idx < nums.size() && nums[first_idx] == target) {
                ans.push_back(first_idx);
                first_idx++;
            }
        }
        
        return ans;
    }
};
