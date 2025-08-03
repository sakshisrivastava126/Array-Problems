class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        unordered_map<int, int> freq;

        for(int it : nums1){
            freq[it]++;
        }

        for(int num : nums2){
            if(freq[num] >0){
                ans.push_back(num);
                freq[num]--;
            }
        }
        return ans;
    }
};
