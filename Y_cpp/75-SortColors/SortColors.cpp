class Solution {
    public:
        void sortColors(vector<int>& nums) {
            int n = nums.size();
    
            int mid = 0, high = n - 1, low = 0;
            while(mid<=high){
                if(nums[mid] == 0){
                    swap(nums[low], nums[mid]);
                    mid++;
                    low++;
                } else if(nums[mid] == 1){
                    mid++;
                }else{
                    swap(nums[high], nums[mid]);
                    high--;
                }
            }
    
    
    
    
    
    
    
            // int count0 = 0, count1 = 0, count2 = 0;
    
            // //O(n)
            // for(int i = 0; i < n; i++){
            //     if(nums[i] == 0) count0++;
            //     else if(nums[i] == 1) count1++;
            //     else count2++;
            // }
            // int idx = 0;
    
            // // O(n)
            // for(int i = 0; i < count0; i++){
            //     nums[idx++] = 0;
            // }
    
            // // O(n)
            //   for(int i = 0; i < count0; i++){
            //     nums[idx++] = 1;
            // }  
    
            // // O(n)
            // for(int i = 0; i < count0; i++){
            //     nums[idx++] = 2;
            // }
        }
    };