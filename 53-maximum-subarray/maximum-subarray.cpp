class Solution {
public:
    int maxSubArray(vector<int>& nums) {
     int currmaxsum=nums[0];
     int maxsum=nums[0];
     for(int i=1;i<nums.size();i++){
        currmaxsum=max(nums[i],currmaxsum+nums[i]);
        maxsum=max(currmaxsum,maxsum);
     }   
     return  maxsum;
    }
};