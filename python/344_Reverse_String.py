class Solution(object):
    def reverseString(self, s):
	return ' '.join([word[::-1] for word in s[::-1].split()])
