class Solution {
public:
    int findLHS(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>freq;
        for(int x: nums){
            freq[x]++;
        }
        int ans=0;

        for(auto it=freq.begin(); it!=freq.end();it++){
            int x=it->first;
            int count=it->second;

            if(freq.count(x+1)){
                ans=max(ans,count+freq[x+1]);
            }
        }
        return ans;
    }
};