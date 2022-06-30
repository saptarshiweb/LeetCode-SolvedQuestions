class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches)
    {
        vector<vector<int>> ans;vector<int> win;vector<int> lose;
        
        unordered_map<int,int> losep;
        
        int n=matches.size();
        
        for(int i=0;i<n;i++)
        {
            losep[matches[i][0]]=0;
            losep[matches[i][1]]=0;
        }
        
        for(int i=0;i<n;i++)
        {
            losep[matches[i][1]]++;
        }
        
        for(auto it: losep)
        {
            if(it.second==0)
                win.push_back(it.first);
            else if(it.second==1)
                lose.push_back(it.first);
        }
        sort(win.begin(),win.end());sort(lose.begin(),lose.end());
        
        ans.push_back(win);ans.push_back(lose);
        return ans;
        
    }
};