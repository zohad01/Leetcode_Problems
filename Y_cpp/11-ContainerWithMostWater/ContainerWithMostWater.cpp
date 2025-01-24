class Solution {
public:
    int maxArea(vector<int>& height) {
        //Optimized Approach O(n) --> Time Complexity
        int lp = 0 , ans = 0;
        int rp = height.size() - 1;
        while(lp < rp){
            int width = rp - lp;
            int ht = min(height[lp],height[rp]);
            int area = width * ht;
            
            ans = max(area,ans);

            height[lp] < height[rp] ? lp++ : rp--;
        }
        return ans;








        //Brute Force Approach O(n^2) --> Time Complexity (TLE)

        // int ans = 0;
        // for(int i = 0; i < height.size(); i++){
        //     for(int j = i+1; j < height.size(); j++){
        //         int width = j - i;
        //         int ht = min(height[i],height[j]);
        //         int area = width * ht;
        //         ans = max(ans, area);
        //     }
        // }
        // return ans;
    }
};