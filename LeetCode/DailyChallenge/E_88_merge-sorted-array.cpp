class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = nums1.size() - nums2.size() - 1;
        int j = nums2.size() - 1;
        int k = nums1.size() - 1;
        while( k >= 0 ) {
            if( i >= 0 && j >= 0 ) {
                if( ( nums1[i] == nums2[j] ) || ( nums1[i] < nums2[j] ) ) {
                    nums1[k] = nums2[j];
                    j--;
                }
                else {
                    nums1[k] = nums1[i];
                    i--;
                }
            }
            else if( j >= 0 ) {
                nums1[k] = nums2[j];
                j--;
            }
            else {
                return;
            }
            k--;
        }
    }
};