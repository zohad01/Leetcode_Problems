class Solution:
    def searchMatrix(self, matrix: List[List[int]], target: int) -> bool:
        for row in matrix:
            st = 0
            end = len(row) - 1
            while(st<=end):
                mid = (st + end) //2
                if row[mid]  == target:
                    return True
                elif row[mid] < target:
                    st = mid + 1
                else:
                    end = mid -1
        return False