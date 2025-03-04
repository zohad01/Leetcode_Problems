class Solution:
    def dailyTemperatures(self, temperatures: List[int]) -> List[int]:
        s = []
        r = [0] * len(temperatures)
        for i in range(len(temperatures)):
            while s and temperatures[i] > temperatures[s[-1]]:
                index = s.pop()
                r[index] = i - index
            s.append(i)
        return r