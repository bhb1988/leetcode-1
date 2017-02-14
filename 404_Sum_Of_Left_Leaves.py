# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution(object):
    def Sum(self, root, isLeft):
        if root == None: return 0
        if(root.left==None and root.right==None and isLeft==True): return root.val
        return self.Sum(root.left,True)+self.Sum(root.right,False)
        
    def sumOfLeftLeaves(self, root):
        return self.Sum(root, False)
