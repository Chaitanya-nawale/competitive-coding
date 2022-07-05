class Solution {
public:
    int wiggleMaxLength( vector<int>& nums ) {
        int maxSeq = 1;
        int currSeq = 1;
        bool diffParity = false;
        for( int i = 1; i < nums.size(); i++ ) {
            if( diffParity ) {
                if( nums[i] > nums[i - 1] ) {
                    currSeq++;
                    diffParity = !diffParity;
                }
            }
            else {
                if( nums[i] < nums[i - 1] ) {
                    currSeq++;
                    diffParity = !diffParity;
                }
            }
        }
        if( currSeq > maxSeq ) {
            maxSeq = currSeq;
        }
        currSeq = 1;
        diffParity = true;
        for( int i = 1; i < nums.size(); i++ ) {
            if( diffParity ) {
                if( nums[i] > nums[i - 1] ) {
                    currSeq++;
                    diffParity = !diffParity;
                }
            }
            else {
                if( nums[i] < nums[i - 1] ) {
                    currSeq++;
                    diffParity = !diffParity;
                }
            }
           
        }
        if( currSeq > maxSeq ) {
            maxSeq = currSeq;
        }
        return maxSeq;
    }
};