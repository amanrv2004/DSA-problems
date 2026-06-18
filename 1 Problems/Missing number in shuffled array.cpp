

class Solution {
  public:
    int findMissing(vector<int>& arr1, vector<int>& arr2) {
        // your code
        // long long n2 = arr2.size();
        // sort(arr1.begin(), arr1.end());
        // sort(arr2.begin(), arr2.end());

        // for (int i = 0; i < n2; i++) {
        //     if (arr1[i] != arr2[i]) {
        //         return arr1[i];
        //     }
        // }

        // return arr1.back();
        
        
        int x = 0;
        int y = 0;
        for(int num:arr1){
            x= x^num;
        }
        for(int num:arr2){
            y= y^num;
        }
        return x^y;
        
        
        
    }
};