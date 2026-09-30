class Solution {
  public:
    int binarySubstring(string& s) {
        // code here
        int n=0;
        for(auto i:s) if(i=='1') n++;
        return (n*(n-1))/2;
    }
};