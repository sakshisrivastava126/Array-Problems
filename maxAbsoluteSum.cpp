class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
       int ans = INT_MIN;
       int n = nums.size();
       int maxCurrSum = nums[0], maxi = nums[0];
       int minCurrSum = nums[0], mini = nums[0];

       for(int i=1; i<n; i++){
            maxCurrSum = max(nums[i], maxCurrSum + nums[i]);
            minCurrSum = min(nums[i], minCurrSum + nums[i]);

            maxi = max(maxi, maxCurrSum);
            mini = min(mini, minCurrSum);
        } 
       return max(abs(maxi), abs(mini));
    }
};
