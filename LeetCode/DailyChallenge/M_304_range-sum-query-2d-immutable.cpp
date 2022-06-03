class NumMatrix {
    int numMatrix[202][202] = {};
public:
    NumMatrix( vector<vector<int>>& matrix ) {
        for ( int i = 0; i < matrix.size(); i++ ) {
            for ( int j = 0; j < matrix[i].size(); j++ ) {
                numMatrix[i + 1][j + 1] = numMatrix[i][j + 1] + numMatrix[i + 1][j]
                                          + matrix[i][j] - numMatrix[i][j];
            }
        }
    }

    int sumRegion( int row1, int col1, int row2, int col2 ) {
        return numMatrix[row2 + 1][col2 + 1] - numMatrix[row2 + 1][col1]
               - numMatrix[row1][col2 + 1] + numMatrix[row1][col1];
    }
};