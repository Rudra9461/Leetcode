// i have extra space as i created a string space named words
// class Solution {
// public:
//     string reverseWords(string s) {
//         stringstream ss(s);
//         string word;
//         vector<string>words;
//         while(ss>>word){
//             reverse(word.begin(),word.end());
//             words.push_back(word);
//         }
//         string ans="";
//         for(int i=0;i<words.size();i++){
//             if(i>0){
//                 ans+=" ";
//             }
//             ans+=words[i];
//         }
//         return ans;
//     }
// };


class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string word;
        string ans = "";

        while (ss >> word) {
            reverse(word.begin(), word.end());

            if (!ans.empty()) {
                ans += " ";
            }

            ans += word;
        }

        return ans;
    }
};