class Solution:
    def calPoints(self, operations: List[str]) -> int:
        Record = []
        for i in operations:
            if i.lstrip('-').isdigit():
                num = int(i)
                Record.append(num)
            elif i == "+":
                Record.append(Record[-1] + Record[-2])
            elif i == "D":
                Record.append( 2 * Record[-1])
            elif i == "C":
                Record.pop()
        return sum(Record)