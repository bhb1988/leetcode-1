class Solution(object):
    def minMoves(self, nums):
        n = len(nums)
        if n < 2 :
            return 0
        else :
            min_num = min(nums)
            res = 0
            for i in range(n) :
                res += nums[i]-min_num
            return res
