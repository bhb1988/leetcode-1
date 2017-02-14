class Solution(object):
    def hammingWeight(self, n):
        """
        :type n: int
        :rtype: int
        """
        count=0
        if n==0:
            return count
        count+=1
        while n&n-1:	#exsit problem
            n=n&n-1
            count=count+1
        return count
