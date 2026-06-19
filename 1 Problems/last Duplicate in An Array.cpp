class Solution {
  public:
    vector<int> dupLastIndex(vector<int>& arr) {
        for(int i = arr.size() - 1; i > 0; i--) {
            if(arr[i] == arr[i - 1]) {
                return {i, arr[i]};
            }
        }
        return {-1, -1};
    }
};