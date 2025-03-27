class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        set<int> temp;
        for(int i=0; i<nums.size(); i++){
            for(int j=i+1; j<nums.size(); j++){
                if(nums[i] + nums[j] == target){
                    temp.insert(i);
                    temp.insert(j);
                    break;
                }
            }
        }
        vector<int> ans(temp.begin(), temp.end());
        return ans;
    }
};
