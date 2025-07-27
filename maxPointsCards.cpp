class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int lSum = 0;
        int rSum = 0;
        int rIndx = cardPoints.size()-1;
        int maxSum = 0;

        //sare add krlo K elems from beginning pehle
        for(int i=0; i< k; i++) lSum += cardPoints[i];

        maxSum = lSum;

        //now ek ek element left se remove kro lsum me and right se add kro rsum me
        //and compare-store krte chalo max sum
        for(int i=k-1; i>=0; i--){
            lSum = lSum - cardPoints[i];
            rSum += cardPoints[rIndx];
            rIndx--;
            maxSum = max(lSum+rSum, maxSum);
        }
        return maxSum;
    }
};
