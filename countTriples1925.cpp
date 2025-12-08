class Solution {
public:
    int countTriples(int n) {
        vector<int> sq(n+1);
        for(int i=1; i<=n; i++){
            sq[i] = i*i ;
        }
        int cnt = 0;
        for(int i=1; i<=n; i++){
            for(int j=1; j<=n; j++){
                for(int z=1; z<=n; z++){
                    if(sq[i] + sq[j] == sq[z]) cnt++;
                }
            }
        }
        return cnt;
    }
};
