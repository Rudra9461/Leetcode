class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        int l=0;
        int r=0;
        int sum=0;
        int length=0;
        int min_length=INT_MAX;
        while(r<n){
            sum+=nums[r];
            while(sum>=target){
                length=r-l+1;
                min_length=min(min_length,length);
                sum-=nums[l];
                l++;
            }
            r++;
        }
        if(min_length==INT_MAX){
            return 0;
        }
        return min_length;
    }
};