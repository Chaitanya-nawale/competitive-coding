class Solution:
    def checkOnesSegment(self, s: str) -> bool:
        zeroStarted = False
        for char in s:
            if char == "0": 
                zeroStarted = True
            elif(zeroStarted):
                return False
        return True