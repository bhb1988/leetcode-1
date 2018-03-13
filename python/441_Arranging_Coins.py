class Solution(object):
    def arrangeCoins(self, n):
        res = 0
        while n > res:
            res += 1
            n -= res
        return res
