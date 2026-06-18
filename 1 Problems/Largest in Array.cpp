class Solution {
  public:
    int largest(vector<int> &arr) {
        // code here
        int min = arr[0];
        int n = arr.size();
        
        for(int i = 0 ; i < n ; i++){
            if(arr[i] > min){
                min = arr[i];
            }
        }
         return min;
    }
};
