class Solution {
public:
    static bool compareString( string i1, string i2 )
    {
        return ( i1.length() > i2.length() );
    }
    
    int longestStrChain( vector<string>& words ) {
        int maxCnt = 1;
        int currLen = 0;
        vector <int> arr( 1001, 1 );
        sort( words.begin(), words.end(), compareString );
        for( int i = 1; i < words.size(); i++ ) {
            currLen = ( ( int ) words[i].length() ) + 1;
            for( int j = i - 1; j >= 0; j-- ) {
                if( currLen > ( ( int ) words[j].length() ) ) {
                    continue;
                } 
                if( currLen == ( ( int ) words[j].length() ) ) {
                    bool ignoreOnceFlag = false;
                    bool predecessor = true;
                    int m = 0;
                    for( int k = 0; k < words[i].length(); k++, m++ ) {
                        if( words[j][m] != words[i][k] ) {
                            if( !ignoreOnceFlag ) {
                                ignoreOnceFlag = true;
                                k--;
                            }
                            else {
                                predecessor = false;
                                break;
                            }
                        }
                    }
                    if( predecessor == true ) {
                        arr[i] = max( arr[i], arr[j] + 1 );
                    }
                }
                else {
                    break;
                }
            }
            maxCnt = max( arr[i], maxCnt );
        }
        return maxCnt;
    }
};