class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>arr;
        int alice=0;
        int bob=1;
        while(bob<nums.size()){
            arr.push_back(nums[bob]);
            bob=bob+2;
            arr.push_back(nums[alice]);
            alice=alice+2;
        }       
        return arr; 
    }
};