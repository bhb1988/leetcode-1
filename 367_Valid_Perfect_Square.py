class Solution(object):
    def __init__(self):
        self.list1 = []
    def isPerfectSquare(self, num):
        """
        :type num: int
        :rtype: bool
        """
        if num == 1 or num == 4:
            return True
        if num < 6:
            return False
        if self.list1 == []:
            self.list1 = [2, int(num/2)]
        middle = int((self.list1[0] + self.list1[-1])/2)
        if middle ** 2 == num:
            return True
        elif middle ** 2 < num:
            self.list1 = [middle, self.list1[-1]]
        else:
            self.list1 = [self.list1[0], middle]
        if self.list1[0] >= self.list1[-1] - 1:
            return False
        else:
            return self.isPerfectSquare(num)
