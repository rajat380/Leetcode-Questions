// class Solution {
// public:
// int n;
//   int solve(vector<int>& nums,int i,int P,int count){
//     if(i>=n)
//     return 0;
//     int take=0;
//     if(P!=-1 || nums[i]>nums[P]){
//     take=1+solve(nums,i+1,i);
//     }
//     int skip=solve(nums,i+1,P);

//     count=max(take,skip);
//     return count;
//   }
//     int findNumberOfLIS(vector<int>& nums) {
//         n=nums.size();
//         int count=0;
//         solve(nums,0,-1,count);
//     }
// };

// class Solution {
// public:
//     int n;

//     pair<int,int> solve(vector<int>& nums, int i, int P) {
//         if(i >= n)
//             return {0, 1}; 

        
//         auto skip = solve(nums, i + 1, P);

        
//         pair<int,int> take = {0, 0};
//         if(P == -1 || nums[i] > nums[P]) {
//             auto next = solve(nums, i + 1, i);
//             take.first = 1 + next.first;
//             take.second = next.second;
//         }

        
//         if(take.first > skip.first) return take;
//         if(skip.first > take.first) return skip;

//         return {take.first, take.second + skip.second};
//     }

//     int findNumberOfLIS(vector<int>& nums) {
//         n = nums.size();
//         return solve(nums, 0, -1).second;
//     }
// };
class Solution {
public:
    int n;
    vector<vector<pair<int,int>>> dp;

    pair<int,int> solve(vector<int>& nums, int i, int P) {
        if(i >= n)
            return {0, 1};

        if(dp[i][P+1].first != -1)
            return dp[i][P+1];

        // Skip
        auto skip = solve(nums, i + 1, P);

        // Take
        pair<int,int> take = {0, 0};
        if(P == -1 || nums[i] > nums[P]) {
            auto next = solve(nums, i + 1, i);
            take.first = 1 + next.first;
            take.second = next.second;
        }

        // Compare
        if(take.first > skip.first)
            return dp[i][P+1] = take;

        if(skip.first > take.first)
            return dp[i][P+1] = skip;

        return dp[i][P+1] = {take.first, take.second + skip.second};
    }

    int findNumberOfLIS(vector<int>& nums) {
        n = nums.size();
        
        dp.resize(n, vector<pair<int,int>>(n+1, {-1, -1}));

        return solve(nums, 0, -1).second;
    }
};