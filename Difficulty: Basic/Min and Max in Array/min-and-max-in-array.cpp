class Solution {
  public:
    vector<int> getMinMax(vector<int> &arr) {
        // code here
        int minn=*min_element(arr.begin(),arr.end());
        int maxx=*max_element(arr.begin(),arr.end());
        return {minn,maxx};
    }
};