class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> temp(nums.size());
        int posIndex = 0;
        int negIndex = 1;
        for(int num : nums){
            if( num > 0 ){
                temp[posIndex] = num;
                posIndex +=2;
            }
            if( num < 0 ){
                temp[negIndex] = num;
                negIndex +=2;
            }
        }
        return temp;
    }
};
