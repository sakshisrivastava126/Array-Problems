class Solution {
  public:
    // Function to find pair with maximum sum
    int pairWithMaxSum(vector<int> &arr) {
        int sum = 0;
        int maxi = arr[0] + arr[1];
        for(int i =1; i<arr.size() - 1; i++){
            sum = arr[i] + arr[i+1];
            maxi = max(maxi, sum);
        }
        return maxi;
    }
};
