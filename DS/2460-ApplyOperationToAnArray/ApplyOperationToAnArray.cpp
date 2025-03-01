class Solution {
    public:
        vector<int> applyOperations(vector<int>& nums) {
            int nonZeroIndex = 0;
            for(int i = 0; i < nums.size() - 1; i++){
                if(nums[i] == nums[i + 1]){
                    nums[i] *= 2;
                    nums[i + 1] = 0;
                    i++;
                }
            }
            for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                swap(nums[i], nums[nonZeroIndex]);
                nonZeroIndex++;
            }
            }
            return nums;
        }
    };