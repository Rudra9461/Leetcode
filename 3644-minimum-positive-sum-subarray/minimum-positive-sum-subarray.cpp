class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int n = nums.size();
        int min_sum = INT_MAX;

        for(int size = l; size <= r; size++) {

            int p = 0;
            int q = 0;
            int sum = 0;

            while(q < n) {

                sum += nums[q];

                if(q - p + 1 == size) {

                    if(sum > 0) {
                        min_sum = min(min_sum, sum);
                    }

                    sum -= nums[p];
                    p++;
                }

                q++;
            }
        }

        if(min_sum == INT_MAX)
            return -1;

        return min_sum;
    }
};