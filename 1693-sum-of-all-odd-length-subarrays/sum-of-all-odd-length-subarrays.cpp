class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int n = arr.size();
        int totalSum = 0;

        // start index of subarray
        for(int i = 0; i < n; i++) {
            // end index of subarray
            for(int j = i; j < n; j++) {
                int len = j - i + 1;
                if(len % 2 == 1) { // only odd length
                    int sum = 0;
                    for(int k = i; k <= j; k++) {
                        sum += arr[k];
                    }
                    totalSum += sum;
                }
            }
        }

        return totalSum;
    }
};