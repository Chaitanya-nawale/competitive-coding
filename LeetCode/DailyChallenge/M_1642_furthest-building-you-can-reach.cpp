class Solution {
public:
    int furthestBuilding( vector<int>& heights, int bricks, int ladders ) {
        priority_queue<int> brickQ;
        int i = 1;
        int diff = 0;
        for( ; i < heights.size(); i++ ) {
            diff = heights[i] - heights[i - 1];
            if( diff > 0 ) {
                if( diff > bricks ) {
                    if( ladders == 0 ) break;
                    if( brickQ.empty() ) {
                        ladders--;
                    }
                    else if( brickQ.top() < diff ) {
                        ladders--;
                    }
                    else {
                        bricks += brickQ.top();
                        brickQ.pop();
                        ladders--;
                        i--;
                    }
                }
                else {
                    bricks -= diff;
                    brickQ.push( diff );
                }
            }
        }
        return --i;
    }
};