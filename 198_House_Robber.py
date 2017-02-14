class Solution:
    # @param num, a list of integer
    # @return an integer
    def rob(self, num):
        length = len(num)
        if length == 0:
            return 0
        dp = [0]*length
        dp[0] = num[0]
        if length == 1:
            return num[0]
        dp[1] = max(num[0], num[1])
        for i in range(2, length):
            dp[i] = max(dp[i-1], dp[i-2]+num[i])
        return dp[length-1]

