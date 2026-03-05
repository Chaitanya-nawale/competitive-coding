class Solution:
    def minOperations(self, s: str) -> int:
        onFlag1 = False
        onFlag2 = True
        changeCount1 = 0
        changeCount2 = 0
        minOps = len(s)
        for char in s:
            if onFlag1 == True and char == "0":
                changeCount1 += 1
            elif onFlag1 == False and char == "1":
                changeCount1 += 1
            if onFlag2 == True and char == "0":
                changeCount2 += 1
            elif onFlag2 == False and char == "1":
                changeCount2 += 1
            onFlag1 = not onFlag1
            onFlag2 = not onFlag2
        if minOps > changeCount1:
            minOps = changeCount1
        if minOps > changeCount2:
            minOps = changeCount2
        return minOps
        