class Solution {
    static bool compareFunction( vector<int> a, vector<int> b ) {
        if( a[0] == b[0] ) {
            return a[1] > b[1];
        }
        return a[0] < b[0];
    }
public:
    vector<vector<int>> reconstructQueue( vector<vector<int>>& people ) {
        sort( people.begin(), people.end(), compareFunction );
        list<pair<int,int>> seqList;
        vector<vector<int>> result;
        for( int i = people.size() - 1; i >= 0; i-- ) {
            auto it = seqList.begin();
            advance( it, people[i][1] );
            seqList.insert( it, make_pair( people[i][0], people[i][1] ) );
        }
        for( auto peoplePair : seqList ) {
            vector<int> row(2);
            row[0] = peoplePair.first;
            row[1] = peoplePair.second;
            result.push_back( row );
        }
        return result;
    }
};