class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        if( nums.size() <= 2 ) return true;
        bool elemChanged = false;
        bool reachedEnd = false;
        for( int i = 0; i < nums.size() - 1; i++ ) {
            if( nums[i] > nums[ i + 1 ] ){
                if( i == 0 || nums[i - 1] <= nums[ i + 1 ] ) {
                    int j = i + 1;
                    for( ; j < nums.size() - 1; j++ ) {
                        if( nums[j] > nums[ j + 1 ] ) {
                            break;                            
                        }
                    }
                    if ( j == nums.size() - 1 ) {
                        return true;
                    }
                }
                if( i == nums.size() - 2 ){
                    return true;
                }
                if ( nums[i] <= nums[ i + 2 ] ) {
                    int j = i + 2;
                    for( ; j < nums.size() - 1; j++ ) {
                        if( nums[j] > nums[ j + 1 ] ) {
                            break;                            
                        }
                    }
                    if ( j == nums.size() - 1 ) {
                        return true;
                    }
                }
                return false;
            }
        }
        return true;
    }
};