class Solution:
    
    def minSwaps(self, grid: List[List[int]]) -> int:
        lastOneList =[]
        n = len(grid)
        for row in grid:
            added = False
            for i in range(n-1,-1,-1):
                if row[i] == 1:
                    lastOneList.append(i)
                    added = True
                    break
            if added == False:
                lastOneList.append(0)
        minNoOfSteps = 0
        print(lastOneList)
        for i in range(n):
            if i < lastOneList[i]:
                needsSwap = True
                for k in range(i+1, n):
                    if lastOneList[k] <= i:
                        needsSwap = False
                        temp = lastOneList.pop(k)
                        lastOneList.insert(i, temp)
                        minNoOfSteps += (k - i)
                        break 
                if needsSwap == True:
                    return -1
        print(lastOneList)
        return minNoOfSteps