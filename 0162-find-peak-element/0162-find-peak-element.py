class Solution:
    def findPeakElement(self, nums: List[int]) -> int:
        st = 0
        end = len(nums) - 1
        while(st<end):
            mid = (st + end)// 2
            if nums[mid] < nums[mid + 1]:
                st = mid + 1
            else:
                end = mid
        return st