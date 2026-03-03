class Solution:
    def reverseInvert(self, binString:str):
        inverse = "" 
        for i in range(len(binString) - 1, -1, -1 ):
            if (binString[i] == "0"):
                inverse += "1"
            else:
                inverse += "0"
        return inverse
    def findKthBit(self, n: int, k: int) -> str:
        binaryString = "0"
        for i in range(1,n):
            binaryString = binaryString + "1" + self.reverseInvert(binaryString)
        print(binaryString)
        return binaryString[k-1]