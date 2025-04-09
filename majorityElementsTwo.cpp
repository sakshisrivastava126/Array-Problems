class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        int min = (int)(n/3) + 1;
        map<int, int> mpp;

       for(int i=0; i<n; i++){
        mpp[nums[i]]++;
        if(mpp[nums[i]] == min){
            ans.push_back(nums[i]);
        }
        if(ans.size() == 2) break;
       }
       sort(ans.begin(), ans.end());
       return ans;
    }
};
