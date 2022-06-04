class Solution {
    vector<vector<string>> result;
    bool cols[10] = {};
    bool diag1[19] = {};
    bool diag2[19] = {};
public:
    vector<vector<string>> solveNQueens( int n ) {
        string str( n, '.' );
        vector<string> cres( n, str );
        result.clear();
        solve( cres, 0 );
        return result;
    }

    void solve( vector<string> cres, int curr ) {
        for ( int i = 0; i < cres.size(); i++ ) {
            if ( !cols[i] && !diag1[i + curr] && !diag2[cres.size() - ( i - curr)] ) {
                cols[i] = true;
                diag1[i + curr] = true;
                diag2[cres.size() - (i - curr)] = true;
                cres[curr][i] = 'Q';
                if ( ( curr + 1 ) == cres.size() ) {
                    result.push_back( cres );
                }
                else {
                    solve( cres, curr + 1 );
                }
                cres[curr][i] = '.';
                cols[i] = false;
                diag1[i + curr] = false;
                diag2[cres.size() - ( i - curr)] = false;
            }
        }
    }
};