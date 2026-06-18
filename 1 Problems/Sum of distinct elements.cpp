class Solution {
  public:
    int findSum(vector<int>& arr) {
        unordered_set<int> st(arr.begin(), arr.end());

        int sum = 0;
        for(int x : st) {
            sum += x;
        }

        return sum;
    }
};