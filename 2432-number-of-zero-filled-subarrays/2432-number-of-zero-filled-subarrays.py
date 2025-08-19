class Solution:
    def zeroFilledSubarray(self, nums: List[int]) -> int:
        count = 0
        count1 = 0
        for i in range(len(nums)):
            if nums[i] == 0:
                count += 1
                count1 += count
            else:
                count = 0
        return count1
