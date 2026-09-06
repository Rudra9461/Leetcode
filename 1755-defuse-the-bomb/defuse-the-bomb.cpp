class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int n=code.size();
        vector<int>ans(n,0);

        for(int i=0;i<n;i++){
            if(k>0){
                for(int j=1;j<=k;j++){
                    int index=(i+j)%n;
                    ans[i]+=code[index];
                }
            }
            else if(k<0){
                for(int j=1;j<=abs(k);j++){
                    int index=(i-j+n)%n;
                    ans[i]+=code[index];
                }
            }
        }
        return ans;
    }
};