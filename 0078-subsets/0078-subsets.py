class Solution:
    def getAllSubsets(self, nums, ans, i, all_Subsets):
        # BaseCase
        if i == len(nums):
            all_Subsets.append(ans.copy())
            return 
        # include
        ans.append(nums[i])
        self.getAllSubsets(nums,ans,i+1,all_Subsets)
        # Backtrack
        ans.pop()
        # Exclude
        self.getAllSubsets(nums,ans, i+1, all_Subsets)
    def subsets(self, nums: List[int]) -> List[List[int]]:
        all_Subsets = []
        ans = []
        self.getAllSubsets(nums,ans,0,all_Subsets)
        return all_Subsets