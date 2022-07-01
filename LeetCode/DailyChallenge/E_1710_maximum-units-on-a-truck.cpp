class Solution {
public:
    int maximumUnits( vector<vector<int>>& boxTypes, int truckSize ) {
        sort( boxTypes.begin(), boxTypes.end(), [] ( vector<int> box1, vector<int> box2 ) -> bool { return box1[1] > box2[1]; } );
        int numBox = 0;
        int numUnits = 0;
        for ( vector<int> box : boxTypes ) {
            if( box[0] + numBox <= truckSize )
            {
                numBox +=  box[0];
                numUnits += box[0] * box[1];
            }
            else {
                numUnits += ( truckSize - numBox ) * box[1];
                break;
            }
        }
        return numUnits;
    }
};