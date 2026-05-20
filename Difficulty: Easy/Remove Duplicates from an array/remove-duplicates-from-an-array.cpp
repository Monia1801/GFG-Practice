class Solution {
  public:
    vector<int> remDuplicate(vector<int>& arr) {
        // code here
        set<int> s(arr.begin(),arr.end());
        vector<int>res(s.begin(),s.end());
        return res;
    }
};