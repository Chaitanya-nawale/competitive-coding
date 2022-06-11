class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int i = 0;
        int currSum = 0;
        int minOps = INT_MAX;
        int n = nums.size();
        for( i = 0; i < n; i++ ) {
            currSum += nums[i];
            if( currSum == x ) {
                minOps = i + 1;
                break;
            }
            else if( currSum > x ) {
                break;
            }
        }
        if( i == n ) {
            return -1;
        }
        int j = n - 1;
        while( j >= 0 && i >= -1 ) {
            currSum += nums[j];
            while( i >= 0 && currSum > x ) {
                currSum -= nums[i];
                i--;
            }
            if( currSum == x && minOps > ( i + n - j + 1 ) && ( i + n - j + 1 ) > 0 ) {
                minOps = ( i + n - j + 1 );
            }
            j--;
        }
        if ( minOps == INT_MAX ) {
            minOps = -1;
        }
        return minOps;
    }
};