class Solution {
public:
    int minMoves2( vector<int>& nums ) {
        sort( nums.begin(), nums.end() );
        if( nums.size() % 2 != 0 ) {
            int total = 0;
            int mid = nums.size();
            mid /= 2;
            for( int i = 0; i < nums.size(); i++ ) {
                total += abs( nums[i] - nums[mid] );
            }
            return total;
        }
        else {
            int mid = nums.size();
            mid /= 2;
            int firstMean = mid;
            int secondMean = mid - 1;
            int firstChange = 0;
            int secondChange = 0;
            for( int i = 0; i < nums.size(); i++ ) {
                firstChange += abs( nums[firstMean] - nums[i] );
                secondChange += abs( nums[secondMean] - nums[i] );
            }
            return min( firstChange, secondChange );
        }
    }
};