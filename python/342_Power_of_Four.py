class Solution(object):
    def isPowerOfFour(self, n):
        """
        :type n: int
        :rtype: bool
        """
        x = 0
        if n < 0:
            return False
        if n == 0 :
            return False
        elif n > 0:
            x = math.log(n)/math.log(4.0)
        b = round(x,0)
        if abs(b-x) < 1e-10:
            return True
        else:
            return False
