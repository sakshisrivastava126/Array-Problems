class Solution {
public:
    int largestPrime(int n) {
        //using sieve of Eratosthenes
        int x = n;  
        vector<int> arr(x+1, 1);
        for(int i=2; i<= sqrt(x); i++){
            if(arr[i] == 1){
                for(int j= i*i; j<=x; j += i){
                    if(arr[j] ==  1) arr[j] = 0;
                }
            }
        }
        int maxi = 0, ans=0;
        for(int i=2; i<arr.size(); i++){
            if(arr[i] == 1 && maxi+i <= n ){
                maxi += i;
                if(arr[maxi] == 1) ans = maxi;
            } 
        }
        return ans;
    }
};
