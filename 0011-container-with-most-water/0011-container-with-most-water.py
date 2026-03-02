class Solution:
    def maxArea(self, height: List[int]) -> int:
        maxWater = 0
        left = 0
        right = len(height) - 1
        while(left < right):
            w = right - left
            ht = min(height[right],height[left])
            current_Water = w * ht
            maxWater = max(maxWater,current_Water)
            if height[left] < height[right]:
                left += 1
            else:
                right -= 1
        return maxWater
        
        
        
        # maxWater = 0
        # for i in range(len(height)):
        #     for j in range(i+1,len(height)):
        #         w = j - i
        #         ht= min(height[i],height[j])
        #         current_Water = w * ht
        #         maxWater = max(maxWater,current_Water)
        # return maxWater

# Time Complexity = O(n^2)
# Space Complexity = O(1)