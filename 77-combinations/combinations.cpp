class Solution {
public:
    void solve(vector<vector<int>>& s, vector<int>& temp, int n, int k, int index) {
        if (temp.size() == k) {
            s.push_back(temp);
            return;
        }

        for (int i = index; i <= n; i++) {
            temp.push_back(i);
            solve(s, temp, n, k, i + 1); 
            temp.pop_back();
        }
    }

    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> s;
        vector<int> temp;
        solve(s, temp, n, k, 1);
        return s;
    }
};