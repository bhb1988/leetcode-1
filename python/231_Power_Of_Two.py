class Solution(object):
    def isPowerOfTwo(self, n):
        """
        :type n: int
        :rtype: bool
        """
        if n>0:
            a=math.log(n)/math.log(2.0);
        else :
            a=0.1;
        b=round(a,0)
        if abs(a-b)<1e-10:
            return True;
        else:
            return False;
