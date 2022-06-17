class Solution {
public:
    string longestCommonPrefix( vector<string>& strs ) {
        int maxCommon = 0;
        bool same = true;
        if( strs.size() == 1 ) return strs[0];
        for( int i = 0; i < strs[0].length(); i++ ) {
            for( int j = 1; j < strs.size(); j++ ) {
                if( strs[j].length() <= i || strs[j-1].length() <= i ||  strs[j][i] != strs[j-1][i] ) {
                    same = false;
                    break;
                }
            }
            if( same == true ) {
                maxCommon++;
            }
            else {
                break;
            }
        }
        return strs[0].substr( 0, maxCommon );
    }
};