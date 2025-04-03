class Solution {
    // Function to find the leaders in the array.
  public:
    vector<int> leaders(vector<int>& arr) {
        vector<int> temp;
        int maxSoFar = INT_MIN;
        
        for(int i = arr.size()-1; i>=0; i--){
            if(arr[i] >= maxSoFar){
                temp.push_back(arr[i]);
                maxSoFar = arr[i];
            }
        }
        reverse(temp.begin(), temp.end());
        return temp;
    }
};
