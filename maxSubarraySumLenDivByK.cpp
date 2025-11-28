class Solution {
public:
    long long maxSubarraySum(vector<int>& nums, int k) {
        if(nums.size() < k) return 0;
        long long maxi= LLONG_MIN;

        //calculate prefix Sum
        vector<long long> prefix(nums.size());
        prefix[0] = nums[0];
        for(int i=1; i<nums.size(); i++){
            prefix[i] = prefix[i-1] + nums[i];
        }

        //we will basically implement kadane's algo but with subarrays of size k
        for(int i = 0; i < k; i++){ //we actually only need to go till k-1 hamne baki subarray sums previously check krliya hai
            int l = i;
            long long currSubSum = 0;

            int j = i;
            while(j < nums.size() && j + k - 1 < nums.size()){
                int r = j + k - 1;
                long long subSum = prefix[r] - ((l > 0) ? prefix[l - 1] : 0); //curr sub array sum

                currSubSum = max(subSum, currSubSum + subSum); //kya naya subarray shuru kre? ya ab tak jo sum chal rha usme hi add kre
                maxi = max(maxi, currSubSum); //calculate max till now

                j = j + k;  //naya j yani naya subarray that will have hm usse bhi size k ka hi lenge
                l = j;
            }
        }
        return maxi;
    }
};
