class Solution {
public:
    vector<long long> sumOfThree(long long num) {
        if(num%3==0){
            long long st=num/3;
            return {st-1,st,st+1};
        }
        return {};
    }
};