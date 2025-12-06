class Solution {
public:
    long long maxPoints(vector<int>& technique1, vector<int>& technique2, int k) {
        int n = technique1.size();

        vector<int> diff; //hmne difference vector liya and store kra sare differences kp
        for(int i=0; i<n; i++){
            diff.push_back(technique1[i] - technique2[i]);
        }
        sort(diff.begin(), diff.end()); //ascending order me sort kr k

        long long ans=0;
        for(int i=0; i<n; i++){
            ans += technique1[i]; //ans calculate kra only using t1
        }
        int i=0;
        while(n-k > 0 && i<n){ //now here we'll add those difference jaha hme t2 profitable lag rha
            ans = max(ans, ans - diff[i]);
            k++; i++;
        }
        return ans;
    }
};
