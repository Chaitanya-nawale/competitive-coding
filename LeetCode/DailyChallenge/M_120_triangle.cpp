class Solution {
    int arr[201] = {};
public:
    int minimumTotal( vector<vector<int>>& triangle ) {
        int n = triangle.size() - 1;
        for( int i = 0; i <= n; i++ ) {
            arr[i] = triangle[n][i];
        }
        for( int j = n - 1; j >= 0; j-- ) {
            for( int i = 0; i <= j; i++ ) {
                arr[i] = min ( arr[i], arr[i+1] ) + triangle[j][i];
            }
        }
        return arr[0];
    }
};