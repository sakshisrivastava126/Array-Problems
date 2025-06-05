class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
          int n = nums.size();
        vector<int> result(n);

        for (int i = 0; i < n; ++i) {
            if (nums[i] == 0) {
                result[i] = 0;
            } else {
                int steps = nums[i];
                int destIndex = (((long long)i + steps) % n + n) % n; // 100% safe
                result[i] = nums[destIndex];
            }
        }
        return result;
    }
};
