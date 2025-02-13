class Solution {
    public:
        int maxDistance(vector<int>& nums1, vector<int>& nums2) {
            int max_dist = 0;
    
        for (int i = 0; i < nums1.size(); i++) {
     
            int low = i, high = nums2.size() - 1, j = i;
            
            while (low <= high) {
                int mid = low + (high - low) / 2;
                if (nums1[i] <= nums2[mid]) {
                    j = mid;  
                    low = mid + 1;
                } else {
                    high = mid - 1;  
                }
            }
            
            max_dist = max(max_dist, j - i);
        }
    
        return max_dist;
        }
    };