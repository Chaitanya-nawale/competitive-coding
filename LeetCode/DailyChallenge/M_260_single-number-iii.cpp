class Solution {
public:
    vector<int> singleNumber( vector<int>& nums ) {
        vector<int> result;
        map<int,int>pairing;
        for( int i: nums ) {
            pairing[i]++;
        }
        for( pair<int,int> pint : pairing ) {
            if( pint.second != 2 ) {
                result.push_back( pint.first );
            }
        }
        return result;
    }
};