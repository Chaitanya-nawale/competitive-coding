class Solution:
    def minimumDeletions(self, s: str) -> int:
        invalidACount = 0
        validBCount = 0
        isCurrentB = False
        minDeletions = 0
        for letter in s:
            if letter == 'a' and isCurrentB == True:
                invalidACount += 1
                if invalidACount == validBCount:
                    minDeletions += invalidACount
                    invalidACount = 0
                    validBCount = 0
                    isCurrentB = False
            elif letter == 'b':
                validBCount += 1
                isCurrentB = True
        minDeletions += invalidACount
        return minDeletions