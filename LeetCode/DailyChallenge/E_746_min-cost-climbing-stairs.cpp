class Solution {
public:
    int minCostClimbingStairs( vector<int>& cost ) {
        vector<int> totalCost( cost.size(), 0 );
        totalCost[0] = cost[0];
        totalCost[1] = cost[1];
        for( int i = 2; i < cost.size(); i++ ) {
            totalCost[i] = min( totalCost[ i - 1 ], totalCost[ i - 2 ] ) + cost[i];
        }
        return min( totalCost[ cost.size() - 1 ], totalCost[ cost.size() - 2 ] );
    }
};