class Solution {
    vector<string> result;
    vector<vector<char>> vc = { {'a','b','c'}, {'d','e','f'},
           {'g','h','i'}, {'j','k','l'}, {'m','n','o'}, {'p','q','r','s'},
           {'t','u','v'}, {'w','x','y','z'} };
public:
    vector<string> letterCombinations( string digits ) {
        result.clear();
        if( digits.size() > 0 ) {
            collectResult( "", 1, digits );
        }
        return result;
    }
    
    void collectResult( string res, int currsize, string digits ) {
        if( currsize == digits.size() ) {
            for ( char ch : vc[( digits[currsize - 1] - '0' ) - 2] ) {
                result.push_back( res + ch );
            }
        }
        else{
            for( char ch:vc[( digits[currsize - 1] - '0' ) - 2] ) {
                collectResult( res + ch, currsize + 1, digits );
            }
        }
    }
};