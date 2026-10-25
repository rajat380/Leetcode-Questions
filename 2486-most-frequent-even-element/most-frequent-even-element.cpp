
class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        unordered_map<int,int> mp;

        for(int i = 0; i < nums.size(); i++) {
            mp[nums[i]]++;
        }

        int maxit = 0;
        int ans = -1;

        for(auto it : mp) {
            if(it.first % 2 == 0) {
                if(it.second > maxit) {
                    maxit = it.second;
                    ans = it.first;
                }
                else if(it.second == maxit && it.first < ans) {
                    ans = it.first;
                }
            }
        }

        return ans;
    }
};
