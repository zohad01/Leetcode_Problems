import math
class Solution:
    def areaOfMaxDiagonal(self, dimensions: List[List[int]]) -> int:
        area = 0
        max_value = 0
        def formula(length,width):
            return math.sqrt(length * length + width * width)
        for i in range(len(dimensions)):
            ans = formula(dimensions[i][0], dimensions[i][1])
            if ans > max_value or (ans == max_value and dimensions[i][0] * dimensions[i][1] > area):
                max_value = ans
                area = dimensions[i][0] * dimensions[i][1]
        return area
            