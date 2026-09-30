class Solution {
  public:
    string removeSpaces(string& s) {
        // code here
        string res="";
        for(auto i:s){
            if(i==' ') continue;
            res+=i;
        }
        return res;
    }
};