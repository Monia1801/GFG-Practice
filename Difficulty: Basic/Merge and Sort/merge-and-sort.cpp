class Solution {
  public:
    vector<int> mergeNsort(vector<int>& arr1, vector<int>& arr2) {
        //  code here
        set<int> res;
        for(auto i:arr1) res.insert(i);
        for(auto i:arr2) res.insert(i);
        vector<int> arr(res.begin(),res.end());
        return arr;
    }
};