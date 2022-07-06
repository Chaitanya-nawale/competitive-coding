class Solution {
public:
    int fib( int n ) {
        vector<int> arr;
        arr.push_back( 0 );
        arr.push_back( 1 );
        for( int i = 2; i <= n; i++ ) {
            arr.push_back( arr[i - 2] + arr[i - 1] );
        }
        return arr[n];
    }
};