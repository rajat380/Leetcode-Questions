class Solution {
public:
    bool stoneGame(vector<int>& piles) {
        int sum1 = 0, sum2 = 0;
        
        for (int i = 0; i < piles.size(); i += 2) {
            sum1 += piles[i];
        }
        
        for (int j = 1; j < piles.size(); j += 2) {
            sum2 += piles[j];
        }
        
        return sum1 > sum2 || sum2 > sum1; 
    }
};