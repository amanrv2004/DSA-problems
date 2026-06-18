class Solution {
public:
    int minValueToBalance(vector<int>& arr) {
        long long leftSum = 0, rightSum = 0;
        int n = arr.size();

        for(int i = 0; i < n/2; i++) {
            leftSum = leftSum + arr[i];
            rightSum = rightSum + arr[i + n/2];
        }

        return abs(leftSum - rightSum);
    }
};