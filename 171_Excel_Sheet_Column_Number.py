class Solution(object):
    def titleToNumber(self, s):
        num = 0  
        for p in s:  
            num = num * 26 + ord(p) - ord('A') + 1  
        return num
