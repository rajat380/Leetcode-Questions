// class Solution {
// public:
//     vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
//         vector<vector<int>>s;
//         sort(arr.begin(),arr.end());
//         int ab=arr[0]-arr[1];
//         for(int i=0;i<arr.size()-1;i++){
//             for(int j=1;j<arr.size()-1;j++){
//                 if(arr[i]-arr[j]==ab){
//                     s.push_back(s[i]);
//                 }
//             }
//         }
//         return s;
//     }
// };

class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        vector<vector<int>> s;
        sort(arr.begin(), arr.end());

        int ab = INT_MAX;
        for(int i = 0; i < arr.size() - 1; i++) {
            int diff = arr[i+1] - arr[i];
            ab = min(ab, diff);
        }
        for(int i = 0; i < arr.size() - 1; i++) {
            if(arr[i+1] - arr[i] == ab) {
                s.push_back({arr[i], arr[i+1]});
            }
        }
        return s;
    }
};