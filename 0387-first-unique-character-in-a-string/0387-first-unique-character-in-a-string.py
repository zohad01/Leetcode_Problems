from collections import deque
class Solution:
    def firstUniqChar(self, s: str) -> int:
        queue = deque()
        count = {}
        for i, character in enumerate(s):
            count[character] = count.get(character,0) + 1
            queue.append((character,i))
            while queue and count[queue[0][0]] > 1:
                queue.popleft()
        return queue[0][1] if queue else -1