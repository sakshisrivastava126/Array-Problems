class Solution{
public:
    // a,b : the arrays
    // Function to return a list containing the union of the two arrays.
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
      set<int> res;
      
      for(int num : a){
          res.insert(num);
      }
      
      for(int num : b){
          res.insert(num);
      }
    
    vector<int> uni(res.begin(), res.end());
    return uni;
    }
};
};
