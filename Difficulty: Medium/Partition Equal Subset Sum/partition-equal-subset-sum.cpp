class Solution {
  public:
   bool subset(int idx,int target,vector<int>& nums){
        if(target==0) return true;
        if(idx==nums.size() || target<0) return false;
        return subset(idx+1,target-nums[idx],nums) || subset(idx+1,target,nums);
    }
    bool equalPartition(vector<int>& arr) {
        // code here
         int target=accumulate(arr.begin(),arr.end(),0);
        if(target%2!=0) return false;
        return subset(0,target/2,arr);
        
    }
};