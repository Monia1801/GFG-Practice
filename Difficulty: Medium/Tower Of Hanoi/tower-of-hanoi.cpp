class Solution {
  public:
    int toh(int n){
        if(n==1) return 1;
        return toh(n-1)+toh(n-1)+1;
    }
    int towerOfHanoi(int n, int from, int to, int aux) {
        // code here
        if(n==0 || n==1) return n;
        return toh(n);
    }
};