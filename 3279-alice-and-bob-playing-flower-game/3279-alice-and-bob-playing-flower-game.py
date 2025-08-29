class Solution:
    def flowerGame(self, n: int, m: int) -> int:
        odds_m = (m + 1) //2
        evens_m = m // 2
        odds_n = (n + 1) // 2
        evens_n = n //2
        return odds_m * evens_n + odds_n * evens_m