// class Solution {
// public:
//   void solve(vector<vector<int>>&s, vector<int>&temp,int k,int n){
//     if(temp==n){
//         s.push_back(temp);
//     }

//   }
//     vector<vector<int>> combinationSum3(int k, int n) {
//         vector<vector<int>>s;
//         vector<int>temp;
//         solve(s,temp,k,n);
//         return s;
//     }
// };

class Solution {
public:
    void solve(vector<vector<int>>& s, vector<int>& temp, int k, int n, int start) {
        
      
        if (temp.size() == k && n == 0) {
            s.push_back(temp);
            return;
        }

       
        if (temp.size() > k || n < 0) return;

        for (int i = start; i <= 9; i++) {
            temp.push_back(i);                
            solve(s, temp, k, n - i, i + 1);   
            temp.pop_back();                   
        }
    }

    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> s;
        vector<int> temp;
        solve(s, temp, k, n, 1);
        return s;
    }
};