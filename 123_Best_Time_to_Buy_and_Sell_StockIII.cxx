class Solution(object):
    def maxProfit(self, prices):
        """
        :type prices: List[int]
        :rtype: int
        """
        n = len(prices)
        if(n<2):
            return 0
        pre_max_profit = [0 for i in range(n)]
        pro_max_profit = [0 for i in range(n)]
        max_profit = 0
        pre_min_buy = prices[0]
        for i in range(1,n):
            #pre i days
            pre_min_buy = min(pre_min_buy,prices[i])
            pre_max_profit[i]=max(pre_max_profit[i-1], prices[i]-pre_min_buy)

        pro_max_sell = prices[n-1]
        for k in range(n-2,-1,-1):
            pro_max_sell = max(pro_max_sell,prices[k])
            pro_max_profit[k]=max(pro_max_profit[k+1], pro_max_sell-prices[k])
        for j in range(0,n):
            max_profit = max(max_profit,pre_max_profit[j]+pro_max_profit[j])
        return max_profit
