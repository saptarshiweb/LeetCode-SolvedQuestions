class Solution {
public:
    vector<string> ans;
    void solve(string s,int N,int open,int close)
    {
        
        if(s.size()==2*N)
        {
            ans.push_back(s);return;
        }
        if(open<N) solve(s+'(',N,open+1,close);
        if(close<open) solve(s+')',N,open,close+1);
    }
    
    vector<string> generateParenthesis(int n)
    {
        solve("",n,0,0);
        return ans;
        
    }
};