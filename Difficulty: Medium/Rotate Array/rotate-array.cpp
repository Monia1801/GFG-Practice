class Solution {
  public:
    void rotateArr(vector<int>& arr, int d) {
        // code here
        int n=arr.size();
        d=d%n;
        vector<int> res;
        for(int i=d;i<n;i++) res.push_back(arr[i]);
        for(int i=0;i<d;i++) res.push_back(arr[i]);
        arr=res;
    }
};