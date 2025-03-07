class Solution:
    def repeatedCharacter(self, s: str) -> str:
        # start = []
        # for i in s: # --> O(n^2)  T.C Due to iteration each element 
        #     if i in start:
        #         return i
        #     start.append(i)
        start = set() # --> O(n) T.C
        for i in s:
            if i in start:
                return i
            start.add(i)