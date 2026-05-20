class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        sort(arr.begin(),arr.end(),greater<int>());
        int largest=arr[0];
        int i=1;
        while(arr[i]==largest) i++;
        if(i<arr.size()) return arr[i];
        return -1;
    }
};