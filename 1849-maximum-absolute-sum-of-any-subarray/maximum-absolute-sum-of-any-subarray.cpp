class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int n = nums.size();
        int maxsubsum=nums[0];
        int currsubsum=nums[0];
        int minsubsum=nums[0];
        int currminsubsum=nums[0];
        for(int i=1;i<n;i++){
            currsubsum=max(nums[i],currsubsum+nums[i]);
            maxsubsum=max(currsubsum,maxsubsum);

             currminsubsum=min(nums[i],currminsubsum+nums[i]);
            minsubsum=min(currminsubsum,minsubsum);

        }
        return max(maxsubsum,abs(minsubsum));
    }
};