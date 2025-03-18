class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> temp;
        for(int i : nums){
            temp.insert(i);
        }
        nums.clear();
        nums.assign(temp.begin(), temp.end());
        return nums.size();
    }
};
