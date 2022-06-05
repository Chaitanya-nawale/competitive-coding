class Solution {
public:
    int minMaxGame( vector<int>& nums ) {
        while( nums.size() != 1 ) {
            vector<int> result;
            bool evenIndexParity = true;
            for( int i =0; i < nums.size() /2; i++ )
            {
                if( evenIndexParity ) {
                    result.push_back( min( nums[2 * i], nums[2 * i + 1] ) );
                }
                else {
                    result.push_back( max( nums[2 * i], nums[2 * i + 1] ) );
                }
                evenIndexParity = !evenIndexParity;
            }
            nums = result;
        }
        return nums[0];
    }
};