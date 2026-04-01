// class Solution {
// public:
//     int findLucky(vector<int>& arr) {
//         int count=0;
//         int intcount=0;
//         int st;
//         for(int i=1;i<arr.size();i++){
//             if(arr[i]==arr[i+1]){
//                 count++;
//                 intcount++;
//             }
//           st=max(count,st);
//           if(st==intcount)
//           return st;
//         }
//         return -1;
//     }
// };

class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int,int> mp;
        
        // count frequency
        for(int x : arr){
            mp[x]++;
        }
        
        int ans = -1;
        
        // check lucky number
        for(auto it : mp){
            if(it.first == it.second){
                ans = max(ans, it.first);
            }
        }
        
        return ans;
    }
};