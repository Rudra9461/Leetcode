// class Solution {
// public:
//     int firstUniqChar(string s) {
//         int n=s.size();
//         unordered_map<char,int>mp;

//         for(int i=0;i<n;i++){
//             mp[s[i]]++;
//         }

//         for(int i=0;i<n;i++){
//             if(mp[s[i]]==1){
//                 return i;
//             }
//         }
//         return -1;
//     }
// };


// using frequency array 
class Solution {
public:
    int firstUniqChar(string s) {
        int freq[26] = {0};

        // Count frequency
        for(int i = 0; i < s.size(); i++) {
            freq[s[i] - 'a']++;
        }

        // Find first unique
        for(int i = 0; i < s.size(); i++) {
            if(freq[s[i] - 'a'] == 1) {
                return i;
            }
        }

        return -1;
    }
};