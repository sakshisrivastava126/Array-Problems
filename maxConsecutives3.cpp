class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int maxLen = 0;
        int l = 0, r = 0;
        int zeros  = 0;

    //agenda is zeros ki value k se badi ni honi chahiye
        while(r < nums.size()){
            if(nums[r] == 0) zeros++;

            //jaise hi value badi ho k se
            //find for zero from left to slide the window 
            //while reducing the value of zeros
            if(zeros > k){
                while(zeros>k){
                    if(nums[l] == 0){
                        zeros--;
                    }
                    l++;
                }
            }
            maxLen = max(r-l+1, maxLen);
            r++;
        }
        return maxLen;
    }
};
