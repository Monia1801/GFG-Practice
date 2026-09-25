class Solution {
  public:
    vector<vector<int>> freqSorted(vector<int>& arr) {
        // code here
        map<int,int> mp;
        for(auto i:arr) mp[i]++;
        
        vector<vector<int>> res;
        
        for(auto i:mp) res.push_back({i.first,i.second});
        return res;
    }
};