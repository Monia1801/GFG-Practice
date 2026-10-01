class Solution {
  public:
    bool binarySearch(vector<int>& arr, int k) {
        // code here
        int low=0,high=arr.size()-1;
       
        
        while(low<=high){
            int mid=(high-low)+low/2;
            if(arr[mid]==k) return true;
            else if(arr[mid]<k) low=mid+1;
            else high=mid-1;
        }
        
        return false;
    }
};