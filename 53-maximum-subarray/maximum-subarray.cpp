class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int l=0;
        int r=0;
        int sum=0;
        int maxsum=INT_MIN;
        while(r<n){
            sum+=nums[r];
            maxsum=max(maxsum,sum);
            r++;
            if(sum<0){
                sum=0;
            }
        }
        return maxsum;
    }
};