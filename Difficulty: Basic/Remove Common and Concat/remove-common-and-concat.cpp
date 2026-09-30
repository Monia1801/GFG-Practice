class Solution {
  public:
    string concatenatedString(string &s1, string &s2) {
        //  code here
        string res="";
        for(auto i:s1){
            if(find(s2.begin(),s2.end(),i)!=s2.end()) continue;
            else res+=i;
        }
        
        for(auto i:s2){
            if(find(s1.begin(),s1.end(),i)!=s1.end()) continue;
            else res+=i;
        }
        
        return res == "" ? "-1" : res;
    }
};