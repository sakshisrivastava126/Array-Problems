class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        unordered_map<int, vector<int>> mp; // element & indexes at which it is occuring
        for(int i=0; i< nums.size(); i++){ 
            mp[nums[i]].push_back(i);
        }

        int mini = 1e9;
        for(auto& it : mp){
            vector<int> v = it.second;
            if(v.size() < 3) continue; // agar 3 index ni h then continue, it cannot be our answer

            //sort so we don't need to use absolute
            // i<j<k : j-i + k-j + k-i = 2(k-i) : we only need 1st and last occurence
            sort(v.begin(), v.end()); 
            for(int i=0; i< v.size()-2; i++) //each time we are accessing upto next 2 elements so we run loop till size-2
            mini = min(mini, 2*(v[i+2] - v[i])); 
        }
        return mini == 1e9 ? -1 : mini;
    }
};
