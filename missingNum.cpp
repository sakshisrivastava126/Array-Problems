class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int  expectedsum = n*(n+1) /2;
        int actualsum = 0;
        for(int i=0; i<n; i++){
            actualsum += nums[i];
        }
        return expectedsum-actualsum;
    }
};
