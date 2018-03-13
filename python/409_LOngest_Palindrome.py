# a little confused
class Solution(object):
    def longestPalindrome(self, s):
        nums = []
        cs = list(s)
        for i in range( 52):
            nums.append(0)
        for i in range( len(cs) ):
            if ord(cs[i]) >= 97 :
                nums[ord(cs[i]) -97 + 26] +=1
            else:
                nums[ ord(cs[i]) - 65 ] += 1
        print nums
        ans = 0
        for i in range( len(nums) ):
            ans += nums[i] /2*2
            if ans%2 == 0 :
                ans += nums[i]%2
        return ans
