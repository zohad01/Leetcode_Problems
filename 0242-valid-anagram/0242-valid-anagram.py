class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        # retrun sorted(s) == sorted(t)
        if len(s) != len(t):
            return False
        count = {}
        for i in s:
            if i in count:
                count[i] += 1
            else:
                count[i] = 1
        for i in t:
            if i not in count:
                return False
            count[i] -= 1
            if count[i] < 0:
                return False
        return True