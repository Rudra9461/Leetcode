class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int n = arr.size();
        int l = 0;
        int r = 0;
        int count = 0;
        int sum = 0;
        while (r < k) {
            sum += arr[r];
            r++;
        }
        if ((sum / k) >= threshold) {
            count++;
        }
        while (r < n) {
            sum += arr[r];
            sum -= arr[l];
            l++;
            r++;
        if ((sum / k) >= threshold) {
            count++;
        }            
        }
        return count;
    }
};