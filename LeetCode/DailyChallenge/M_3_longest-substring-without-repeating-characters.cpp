class Solution {
public:
    int lengthOfLongestSubstring( string s ) {
        int asci[256] = {};
        int j = 0;
        int maxc = 0;
        int cnt = 0;
        for ( int i = 0; i<s.size() ; i++ )
        {
            if( asci[ (int) s[i] ] == 0 )
            {
                asci[ (int) s[i] ] = 1;
                maxc++;
            }
            else
            {
                while( asci[ (int) s[i] ] != 0 )
                {
                    asci[ (int) s[j] ] = 0;
                    j++;
                    maxc--;
                }
                asci[ (int) s[i] ] = 1;
                maxc++;
            }
            if( maxc > cnt )
            {
                cnt = maxc;
            }
        }
        return cnt;
    }
};