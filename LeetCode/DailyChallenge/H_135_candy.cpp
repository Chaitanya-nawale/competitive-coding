class Solution {
public:
    int candy( vector<int>& ratings ) {
        vector<pair<int,int>>seq;
        vector<int> resultSet( ratings.size(), 0 );
        int result = 0;
        for( int i = 0; i < ratings.size(); i++ )
        {
            seq.push_back( make_pair( ratings[i], i ) );
        }
        sort( seq.begin(), seq.end(), [] ( pair<int,int> a, pair<int,int> b ) -> bool {
            return a.first < b.first;
        } );
        int left = 0;
        int right = 0;
        for( int i = 0; i < seq.size(); i++ ) {
            left = 0;
            right = 0;
            if( ( seq[i].second - 1 ) >= 0 ) {
                left = resultSet[ seq[i].second - 1 ];
                if( ratings[ seq[i].second - 1 ] == ratings[ seq[i].second ] ) {
                    left = 0;
                }
            } 
            if( ( seq[i].second + 1 ) <  ratings.size() ) {
                right = resultSet[ seq[i].second + 1 ];
                if( ratings[ seq[i].second + 1 ] == ratings[ seq[i].second ] ) {
                    right = 0;
                }
            }
            resultSet[ seq[i].second ] = max( left, right ) + 1;
        }
        for( int i = 0; i < resultSet.size(); i++ ) {
            result += resultSet[i];
        }
        return result;
    }
};