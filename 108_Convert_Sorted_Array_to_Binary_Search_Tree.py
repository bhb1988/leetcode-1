# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution(object):
    def sortedArrayToBST(self, num):
        length = len(num)
        if length == 0:
            return None
        if length == 1:
            return TreeNode(num[0])
        root = TreeNode(num[length / 2])
        root.left = self.sortedArrayToBST(num[:length/2])
        root.right = self.sortedArrayToBST(num[length/2 + 1:])
        return root
