class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int ele=0;
        for(int i=0;i<n;i++){
            ele^=i^nums[i];
        }
        return ele^n;
    }
};