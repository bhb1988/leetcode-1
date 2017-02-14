class Solution(object):
    def firstUniqChar(self, s):
        dict_s = {}
        for str in s:
            dict_s[str] = 0
        for str in s:
            dict_s[str]  = dict_s[str] + 1
        for x in range( len(s) ):
            if dict_s[s[x]] == 1:
                return x
        return -1
