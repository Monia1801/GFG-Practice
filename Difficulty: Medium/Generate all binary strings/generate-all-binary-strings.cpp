class Solution {
  public:
    
    vector<string> res;
    
    void str(string s,int n){
        if(s.length()==n) {
            res.push_back(s);
            return;
        }
        str(s+="0",n);
        s.pop_back();
        str(s+="1",n);
        
    }
    vector<string> binstr(int n) {
        // code here
        str("",n);
        return res;
    }
};