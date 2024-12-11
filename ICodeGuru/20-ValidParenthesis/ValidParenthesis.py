class Solution:
    def isValid(self, s: str) -> bool:
        stack = []
        start = "([{"
        end = ")]}"
        
        for i in s:
            if i in start:
                stack.append(i)
            elif i in end:
                if stack and stack[-1] == start[end.index(i)]:
                    stack.pop()
                else:
                    return False
        return len(stack) == 0
