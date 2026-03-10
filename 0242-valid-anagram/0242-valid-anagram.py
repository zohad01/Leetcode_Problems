class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if len(s) != len(t):
            return False
        frequency = [0] * 26
        for i in s:
            frequency[ord(i) - ord('a')] += 1
        for i in t:
            frequency[ord(i) - ord('a')] -= 1
        for i in frequency:
            if i != 0:
                return False
        return True