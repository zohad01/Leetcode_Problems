class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        freq = 0
        ans = None
        for num in nums:
            if freq == 0:
                ans = num
            if num == ans:
                freq += 1
            else:
                freq -= 1
        return ans

