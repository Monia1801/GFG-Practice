class Solution {
  public:
    void pushZerosToEnd(vector<int>& arr) {
        // code here
        vector<int> res;
        int cnt=0;
        for(auto i:arr){
            if(i==0) cnt++;
            else res.push_back(i);
        }
        while(cnt--) res.push_back(0);
        arr=res;
    }
};