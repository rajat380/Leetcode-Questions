class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_map<int, int> mp;
        vector<int> temp;

        for (int i = 0; i < nums.size(); i++) {
            if (mp.find(nums[i]) == mp.end()) {
                mp[nums[i]] = 1;
                temp.push_back(nums[i]);
            }
        }

        for (int i = 0; i < temp.size(); i++) {
            nums[i] = temp[i];
        }

        return temp.size();
    }
};