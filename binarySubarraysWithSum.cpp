class Solution {
public:
    int helper(vector<int>& nums, int goal){
        if(goal < 0) return 0;
        int sum = 0;
        int l=0, r=0;
        int cnt=0;

        while(r < nums.size()){
            sum += nums[r];
            //jaise hi sum exceed kre move the left pointer aage
            //and make the sum valid
            while(sum > goal){
                sum = sum - nums[l];
                l++;
            }
            //at each point no. of subaaray will be equal to r-l+1
            cnt = cnt + (r-l+1);
            r++;
        }
        return cnt;
    }
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        //logic is we will find no. of subaarays lesser than equal to goal
        //and subtract from no. of subaarays lesser than equal to goal-1
       return helper(nums, goal) - helper(nums, goal-1);
    }
};
