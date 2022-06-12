class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        bool arr[10001] = {};
        int j = 0;
        int maxSum = 0;
        int currSum = 0;
        for ( int i = 0; i<nums.size() ; i++ )
        {
            if( arr[ nums[i] ] == false )
            {
                arr[ nums[i] ] = true;
                currSum += nums[i];
            }
            else
            {
                while( arr[ nums[i] ] != false )
                {
                    arr[ nums[j] ] = false;
                    currSum -= nums[j];
                    j++;
                }
                arr[ nums[i] ] = true;
                currSum += nums[i];
            }
            if( currSum > maxSum )
            {
                maxSum = currSum;
            }
        }
        return maxSum;
    }
};