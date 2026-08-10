class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n=nums.size();
        int l=0;
        double maxsum=INT_MIN;
        double sum=nums[0];
        int r=1;
        while(r<k){
            sum+=nums[r];
            r++;
        }
        maxsum=sum;
        while(r<n){
            sum-=nums[l];
            l++;
            sum+=nums[r];
            r++;
            maxsum=max(maxsum,sum);
        }
        return maxsum/k;
    }
};