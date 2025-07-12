class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> ans;
        set<int> s;
        for(auto& num : nums){
            if(s.find(num) == s.end()){
                s.insert(num);
            }
        }
        for(int i=1; i<=nums.size(); i++){
            if(s.find(i) == s.end()){
                ans.push_back(i);
            }
        }
        return ans;
    }
};
