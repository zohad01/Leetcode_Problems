class Solution:
    def reverseWords(self, s: str) -> str:
        s = s[::-1]
        ans = ""
        i = 0
        while i < len(s):
            word = ""
            while i < len(s) and s[i] != ' ':
                word += s[i]
                i += 1
            word = word[::-1]
            if len(word) > 0:
                ans += " " + word
            i += 1
        return ans[1:]


        # words = s.split()
        # reversed_words = words[::-1]
        # return " ".join(reversed_words)