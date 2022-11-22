class Solution {
public:
    int numSquares( int n ) {
        int squares[100] = {};
        int minSumArray[10000] = {};
        for( int i = 1; i <= 100; i++ ) {
            if( i*i <= n ) {
                squares[i-1] = i*i;
            }
            else {
                break;
            }
        }
        minSumArray[0] = 1;
        int minSum = 10000;
        int limit = 0; 
        for( int i = 2; i <= n; i++ ) {
            if( squares[limit+ 1] == i ) {
                minSumArray[i-1] = 1;
                limit++;
                continue;
            }
            minSum = 10000;
            for( int j = 0; j <= limit; j++ ) {
                if( minSum > minSumArray[ i - squares[j] - 1 ] + 1 )
                {
                    minSum = minSumArray[ i - squares[j] - 1 ] + 1;
                }
            }
            minSumArray[i-1] = minSum;
        }
        return minSumArray[n-1];
    }
};