class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int ans = 0;
        int n = nums.size();
        for(int i = 0; i < n; i++){
            int count = 0;
            int num = nums[i];
        while(num > 0){
            num /= 10;
            count++;
        }
        if(count%2==0){
            ans++;
        }
    }
        return ans;
    }
};