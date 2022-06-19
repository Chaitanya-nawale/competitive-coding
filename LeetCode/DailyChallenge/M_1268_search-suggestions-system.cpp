class Solution {
public:
    vector<vector<string>> suggestedProducts( vector<string>& products, string searchWord ) {
        vector<vector<string>> result;
        sort( products.begin(), products.end() );
        for ( int i = 0; i< searchWord.length(); i++ )
        {
            vector<string>currResult;
            for ( string str : products ) {
                if( str.length() > i && str[i] == searchWord[i] ) {
                    currResult.push_back( str );
                }
                
            }
            if( currResult.size() > 3 ) {
                vector<string>topThreeResult;
                topThreeResult.push_back( currResult[0] );
                topThreeResult.push_back( currResult[1] );
                topThreeResult.push_back( currResult[2] );
                result.push_back( topThreeResult );
            }
            else {
                result.push_back( currResult );
            }
            products = currResult;
        }
        return result;
    }
};