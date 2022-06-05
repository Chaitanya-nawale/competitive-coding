class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int sumi = 1;
        int i = 0;
        int mini = nums[0];
        while(i<nums.size()){
            if((nums[i] - mini) > k ){
                mini = nums[i]; 
                sumi++;
            }
            i++;
        }
        return sumi;
    }
};