class Solution {
  public:
    
    bool checkIncreasing(vector<int>& arr){
        for(int i=1;i<arr.size();i++){
            if(arr[i-1]<arr[i]) return false;
        }
        return true;
    }
    
    bool checkDecreasing(vector<int>& arr){
        for(int i=1;i<arr.size();i++){
            if(arr[i-1]>arr[i]) return false;
        }
        return true;
    }
    
    bool isSorted(vector<int>& arr) {
        // code here
        if(arr[0]<arr[1]) return checkDecreasing(arr);
        else if(arr[0]>arr[1]) return checkIncreasing(arr);
        else{
            int i=0;
            while(arr[i]==arr[0] && i<arr.size()) i++;
            if(i==arr.size()-1) return true;
            if(arr[0]<arr[i]) return checkDecreasing(arr);
            else return checkIncreasing(arr);
        }
    }
};