class Solution {
public:
    int maximumValue(vector<string>& strs) {
        int max_val = 0;
        
        for (string s : strs) {
            bool has_letters = false;
            
            for (char c : s) {
                if (c >= 'a' && c <= 'z') {
                    has_letters = true;
                    break; 
                }
            }
            
            int current_val = 0;
            if (has_letters) {
                current_val = s.length(); 
            } else {
                current_val = stoi(s);  
            }
            if (current_val > max_val) {
                max_val = current_val;
            }
        }
        
        return max_val;
    }
};
