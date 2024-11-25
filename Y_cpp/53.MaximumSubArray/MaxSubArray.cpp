class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int cur_sum = 0, max_sum = INT_MIN;
        for(int val : nums){
            cur_sum += val;
            max_sum = max(cur_sum, max_sum);
            if(cur_sum < 0)
            cur_sum = 0;
        }
        return max_sum;
    }
};