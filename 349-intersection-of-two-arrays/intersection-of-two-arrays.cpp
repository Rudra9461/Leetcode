class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        vector<int>ans;
        unordered_set<int>st;
        for(int x :nums1){
            st.insert(x);
        }

        for(int x : nums2){
            if(st.count(x)){
                ans.push_back(x);
                st.erase(x);
            }
        }
        return ans;
    }
};