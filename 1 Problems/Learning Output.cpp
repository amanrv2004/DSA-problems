
class Solution {
  public:
    void Learning(int a[], int n, float &pos, float &neg, float &zero) {
        // Your code goes here
        
        int p = 0, ne = 0, z = 0;
        
        for(int i = 0; i < n; i++) {
            if(a[i] > 0)
                p++;
            else if(a[i] < 0)
                ne++;
            else
                z++;
        }
        
        pos = (float)n / p;
        neg = (float)n / ne;
        zero = (float)n / z;
    }
};