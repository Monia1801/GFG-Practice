class Solution {
  public:
    int minToggle(vector<int>& arr) {
        int n = arr.size();
        
        int rightZeros = 0;
        for (int x : arr) {
            if (x == 0) rightZeros++;
        }
        
        int leftOnes = 0;
        int ans = rightZeros; 
        
        for (int i = 0; i < n; i++) {
            if (arr[i] == 0) {
                rightZeros--;   
            } else {
                leftOnes++;     
            }
            
            ans = min(ans, leftOnes + rightZeros);
        }
        
        return ans;
    }
};