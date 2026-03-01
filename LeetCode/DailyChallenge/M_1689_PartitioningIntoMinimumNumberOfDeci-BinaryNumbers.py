class Solution:
    def minPartitions(self, n: str) -> int:
        maxNum = 0
        for i in n:
            if int(i) > maxNum:
                maxNum = int(i)
        return maxNum