class Solution {
  public:
    int coin(vector<int>& arr) {
        // code here
        int n=arr.size();
        if(n==1) return arr[0];
        return *min_element(arr.begin(),arr.end());
    }
};