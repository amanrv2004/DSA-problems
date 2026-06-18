class Solution {
  public:
    vector<int> findElements(vector<int> arr) {
        // Your code goes here
        vector<int> newArr;
        sort(arr.begin(), arr.end());
        for(int i = 0 ; i < arr.size()-2; i++){
            newArr.push_back(arr[i]);
        }
        
        return newArr;
    }
};