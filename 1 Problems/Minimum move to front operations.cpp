class Solution {
  public:
    int minMoves(vector<int>& arr) {
        int n = arr.size();
        int expected = n;

        for (int i = n - 1; i >= 0; i--) {
            if (arr[i] == expected) {
                expected--;
            }
        }

        return expected;
    }
};