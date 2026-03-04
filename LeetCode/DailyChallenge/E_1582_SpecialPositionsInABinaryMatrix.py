class Solution:
    def numSpecial(self, mat: List[List[int]]) -> int:
        rows = [0]*len(mat)
        columns = [0]*len(mat[0])
        for i in range(len(rows)):
            for j in range(len(columns)):
                rows[i] += mat[i][j]
                columns[j] += mat[i][j]
        specialPositions = 0
        for i in range(len(rows)):
            if(rows[i] == 1):
                for j in range(len(columns)):
                    if (columns[j] == 1) and (mat[i][j]==1):
                        specialPositions +=1
        return specialPositions
        