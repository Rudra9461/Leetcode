class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        int l=0;
        int r=0;
        double sum=0;
        double maxsum=INT_MIN;
        while(r<k){
            sum+=nums[r];
            r++;
        }
        maxsum=max(maxsum,sum);
        while(r<n){
            sum+=nums[r];          
            sum-=nums[l];
            maxsum=max(maxsum,sum);  
            l++;
            r++;
        }   
        return maxsum/k;
    }
};