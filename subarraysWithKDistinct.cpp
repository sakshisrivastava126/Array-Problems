class Solution {
private:
    int helper(vector<int>& nums, int k){
        if(k <= 0) return 0;
        int l = 0, r=0;
        int cnt = 0;
        unordered_map<int, int> mp; //num, freq

        while(r < nums.size()){
            mp[nums[r]]++;
            
            //jab tak map ka size isnt good tab tak left aage move krte raho
            while(mp.size() > k){
                mp[nums[l]]--;
                if(mp[nums[l]] == 0) mp.erase(nums[l]);
                l++;
            }
            cnt += r-l+1;
            r++;
        }
        return cnt;
    }    
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        //idea is to find for K or less distinct elems subarray and then subtracting the K-1 distict elems subaaray from it
       return helper(nums, k) - helper(nums,k-1);
    }
};
