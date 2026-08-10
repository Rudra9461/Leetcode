class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        int minlength=INT_MAX;
        int l=0;
        int r=0;
        int length=0;
        int sum=0;
        while(r<n){
            sum+=nums[r];
            while(sum>=target){
                length=(r-l+1);
                minlength=min(minlength,length);
                sum-=nums[l];
                l++;
            }
            r++;
            
        }
        if(minlength==INT_MAX)return 0;

        return minlength;
    }
};