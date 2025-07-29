class Solution {
public:
    int helper(vector<int>& nums, int k){
        if(k < 0) return 0;
        int l = 0, r=0;
        int cnt = 0;
        int odds = 0;

        while(r < nums.size()){
            if(nums[r]%2 != 0) odds++;

            while(odds > k){
                if(nums[l]%2 != 0) odds--;
                l++;
            }
            cnt += r-l+1;
            r++;
        }
        return cnt;
    }
    int numberOfSubarrays(vector<int>& nums, int k) {
        return helper(nums, k) - helper(nums, k-1);
    }
};
