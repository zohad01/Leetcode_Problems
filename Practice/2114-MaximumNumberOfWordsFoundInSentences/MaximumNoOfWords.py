class Solution:
    def mostWordsFound(self, sentences: List[str]) -> int:
        maxCount = 0
        for i in range(len(sentences)):
            wordCount = sentences[i].count(" ") + 1
            if maxCount < wordCount:
                maxCount = wordCount
        return maxCount