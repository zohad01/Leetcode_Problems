class Solution:
    def findDisappearedNumbers(self, nums: List[int]) -> List[int]:
        arr = []
        nums_set = set(nums)
        for i in range(1,len(nums) + 1):
            if i not in nums_set:
                arr.append(i)
        return arr