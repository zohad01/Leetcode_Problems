class Solution:
    def intersection(self, nums1: List[int], nums2: List[int]) -> List[int]:
        nums1.sort()
        nums2.sort()
        ans = []
        i , j = 0 , 0
        while i < len(nums1) and j < len(nums2):
            if(nums1[i] == nums2[j]) and nums1[i] not in ans:
                ans.append(nums1[i])
                i += 1
                j += 1
            elif(nums1[i]<nums2[j]):
                i += 1
            else:
                j+= 1
        return ans

# class Solution:
#     def intersection(self, nums1: List[int], nums2: List[int]) -> List[int]:
#         nums1.sort()
#         nums2.sort()
#         ans = set()
#         i , j = 0 , 0
#         while i < len(nums1) and j < len(nums2):
#             if(nums1[i] == nums2[j]): 
#                 ans.add(nums1[i])
#                 i += 1
#                 j += 1
#             elif(nums1[i]<nums2[j]):
#                 i += 1
#             else:
#                 j+= 1
#         num = []
#         for i in ans:
#             num.append(i)
#         return num