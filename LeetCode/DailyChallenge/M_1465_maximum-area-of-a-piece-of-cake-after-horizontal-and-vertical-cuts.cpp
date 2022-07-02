class Solution {
public:
    int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) {
        sort( horizontalCuts.begin(), horizontalCuts.end() );
        sort( verticalCuts.begin(), verticalCuts.end() );
        int maxHorizon = horizontalCuts[0];
        int maxVertical = verticalCuts[0];
        int hlen = horizontalCuts.size();
        int vlen = verticalCuts.size();
        for( int i = 1; i < hlen; i++ ) {
            if( maxHorizon < horizontalCuts[i] - horizontalCuts[i - 1] ) {
                maxHorizon = horizontalCuts[i] - horizontalCuts[i - 1];
            }
        }
        for( int i = 1; i < vlen; i++ ) {
            if( maxVertical < verticalCuts[i] - verticalCuts[i - 1] ) {
                maxVertical = verticalCuts[i] - verticalCuts[i - 1];
            }
        }
        if( maxHorizon < h - horizontalCuts[hlen - 1] ) {
            maxHorizon = h - horizontalCuts[hlen - 1];
        }
        if( maxVertical < w - verticalCuts[vlen - 1] ) {
            maxVertical = w - verticalCuts[vlen - 1];
        }
        long long area = maxHorizon * 1LL;
        area *= maxVertical;
        area %= 1000000007;
        return ( int ) area;
    }
};