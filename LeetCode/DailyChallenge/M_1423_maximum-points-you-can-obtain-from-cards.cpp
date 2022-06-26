class Solution {
public:
    int maxScore( vector<int>& cardPoints, int k ) {
        int maxScore = 0;
        for( int i = 0; i < k; i++ ) {
            maxScore += cardPoints[i];
        }
        int currScore = maxScore;
        for( int i = 1; i <= k; i++ ) {
            currScore -= cardPoints[k - i];
            currScore += cardPoints[ cardPoints.size() - i ];
            if( currScore > maxScore ) {
                maxScore = currScore;
            }
        }
        return maxScore;
    }
};