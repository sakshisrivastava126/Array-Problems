class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n= nums.size();
        vector<int> temp;
        for(int i=0; i<nums.size(); i++){
           if(nums[i] != 0){
            temp.push_back(nums[i]);
           }
        }
        int ts = temp.size();
        for(int i=ts; i<n; i++){
            temp.push_back(0);
        }
        nums=temp;
    }
};
