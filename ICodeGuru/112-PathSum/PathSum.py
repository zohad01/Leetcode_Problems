# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def hasPathSum(self, root: Optional[TreeNode], targetSum: int) -> bool:
        if not root:
            return False
        def traverse(root, Sum):
            if not root:
                return False
            Sum += root.val
            if not root.left and not root.right:
                return Sum == targetSum
            return traverse(root.left, Sum) or traverse(root.right, Sum)
        return traverse(root, 0)