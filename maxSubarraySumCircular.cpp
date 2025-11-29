class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int n = nums.size();

        int minSum = nums[0], maxSum = nums[0], totalSum = nums[0];
        int maxCurrSum = nums[0], minCurrSum = nums[0];

        for(int i=1; i<n; i++){
            totalSum += nums[i];
            maxCurrSum = max(nums[i], nums[i] + maxCurrSum);
            minCurrSum = min(nums[i], nums[i] + minCurrSum);

            maxSum = max(maxSum, maxCurrSum);
            minSum = min(minSum, minCurrSum);
        }
        if(maxSum < 0) return maxSum;
        return max(totalSum-minSum, maxSum);
    }
};
