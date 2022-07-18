//Sliding Window

class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        vector<int>csum(cardPoints.size(),0);
        int sum = 0;
        for(int i = 0 ; i < cardPoints.size() ; i++) {
            sum += cardPoints[i];
            csum[i] = sum;
        }
        if(cardPoints.size() == k) return sum;
        
        int score = 0;
        int ans = 0;
        
        for(int i = 0 ; i <= k ; i++) {
            int j = i + cardPoints.size() - k - 1;
            
            if(i == 0) ans = csum[j];
            else ans = csum[j] - csum[i-1]; //sum of subarray that we are going to remove
            score = max(score,sum-ans);
        }
        return score;
    }
};
