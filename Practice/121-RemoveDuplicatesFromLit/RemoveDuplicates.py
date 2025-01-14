class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        maxi = 0
        minprice = float('inf')
        for i in range(len(prices)):
            if prices[i] < minprice:
                minprice = prices[i]
            elif prices[i] - minprice > maxi:
                maxi = prices[i] -minprice
        return maxi
