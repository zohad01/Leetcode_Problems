# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def preorderTraversal(self, root: Optional[TreeNode]) -> List[int]:
        output = []
        if not root:
            return output
        def result(node):
            output.append(node.val)
            if node.left:
                result(node.left)
            if node.right:
                result(node.right)
        result(root)
        return output
