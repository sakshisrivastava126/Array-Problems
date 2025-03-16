class Solution {
  public:
    // Function returns the second
    // largest elements
    int getSecondLargest(vector<int> &arr) {
     int largest = arr[0];
     int slargest = -1;
     int n = arr.size();
     for(int i=0; i<n; i++){
         if(arr[i]>largest){
             slargest = largest;
             largest = arr[i];
         }
         else if(arr[i]<largest && arr[i]>slargest){
             slargest = arr[i];
         }   
     }
     return slargest;   
    }
};
