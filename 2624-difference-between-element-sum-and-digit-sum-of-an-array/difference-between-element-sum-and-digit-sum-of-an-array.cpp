class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int sum1 = 0;
        int sum2 = 0;
        
        for(int i = 0; i < nums.size(); i++){
            sum1 += nums[i];
        }

        for(int i = 0; i < nums.size(); i++){
            int num = nums[i];          
            
            while(num > 0){            
                sum2 += num % 10;
                num /= 10;
            }
        }

        int diff = sum1 - sum2;
        return abs(diff);              
    }
};