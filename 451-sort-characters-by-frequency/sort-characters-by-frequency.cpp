class Solution {
public:
    string frequencySort(string s) {
        int n=s.size();
        unordered_map<char,int>mp;
        for(int i=0;i<n;i++){
            mp[s[i]]++;
        }

        vector<pair<char,int>>arrange(mp.begin(),mp.end());
        sort(arrange.begin(), arrange.end(),[](auto &a, auto &b) {
                 return a.second > b.second;});

        string ans="";
        for(auto x : arrange){
            ans.append(x.second , x.first);
        } 
        return ans;        
    }
};