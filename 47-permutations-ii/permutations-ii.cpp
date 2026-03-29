// class Solution {
// public:
//   void solve(vector<int>& nums,vector<vector<int>>&ans,vector<int>&temp,int index){
//     if(temp.size()==nums.size()){
//         ans.push_back(temp);
//         return;
//     }
//     for(int i=index;i<=nums.size();i++){
//         temp.push_back(i);
//         solve(nums,ans,temp,index+1);
//         temp.pop_back();
//     }
//   }
//     vector<vector<int>> permuteUnique(vector<int>& nums) {
//     vector<vector<int>>ans;
//     vector<int>temp;
//     sort(nums.begin(), nums.end());
//     solve(nums,ans,temp,1);
//     return ans;
//     }
// };
 

 class Solution {
public:
  void solve(vector<int>& nums, vector<vector<int>>& ans, vector<int>& temp, vector<bool>& used){
    
    if(temp.size() == nums.size()){
        ans.push_back(temp);
        return;
    }

    for(int i = 0; i < nums.size(); i++){

        // skip used index
        if(used[i]) continue;

        // skip duplicates
        if(i > 0 && nums[i] == nums[i-1] && !used[i-1]) continue;

        temp.push_back(nums[i]);
        used[i] = true;

        solve(nums, ans, temp, used);

        temp.pop_back();
        used[i] = false;
    }
  }

  vector<vector<int>> permuteUnique(vector<int>& nums) {
    vector<vector<int>> ans;
    vector<int> temp;
    vector<bool> used(nums.size(), false);

    sort(nums.begin(), nums.end());

    solve(nums, ans, temp, used);
    return ans;
  }
};