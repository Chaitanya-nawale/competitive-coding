class Solution {
public:
    vector<vector<int>> transpose( vector<vector<int>>& matrix ) {
        vector<vector<int>> result( matrix[0].size(), vector<int> ( matrix.size(), 0 ) );
        for ( int i = 0; i < result.size(); i++ ) {
            for ( int j = 0; j < result[i].size(); j++) {
                result[i][j] = matrix[j][i];
            }
        }
        return result;
    }
};