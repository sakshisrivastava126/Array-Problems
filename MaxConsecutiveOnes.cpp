class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0;
        vector<int> temp;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==1){
                count++;
                temp.push_back(count);
            }
            else{
                count = 0;
            }
        }
        if(temp.empty()){
            return 0;
        }

        int max = temp[0];
        for(int i=1; i<temp.size(); i++){
            if(temp[i] > max){
                max=temp[i];
            }
        }
        return max;
    }
};
