class Solution {
public:
    vector<vector<string>> mostPopularCreator(vector<string>& creators, vector<string>& ids, vector<int>& views) {
        vector<vector<string>> ans;
        
        unordered_map<string,vector<pair<int,string>>> m;
        unordered_map<string,long long> sum;
        unordered_map<string,pair<string,int>> large;
        long long big=0;
        
        int n=creators.size();
        
        for(int i=0;i<n;i++)
        {
            string s=creators[i];
            sum[s]+=views[i];
            if(large.find(s)==large.end())
            {
                large[s]={ids[i],views[i]};
            }
            else
            {
                if(views[i]>large[s].second)
                {
                    large[s]={ids[i],views[i]};
                }
                else if(views[i]==large[s].second && ids[i]<large[s].first)
                {
                    large[s]={ids[i],views[i]};
                }
            }
            m[creators[i]].push_back({views[i],ids[i]});
            
            if(sum[s]>big) big=sum[s];
        }
        
        for(auto it: m)
        {
            string s=it.first;
            if(sum[s]==big)
            {
               
                vector<string> tem;
                
                tem.push_back(s);tem.push_back(large[s].first);
                ans.push_back(tem);
                
            }
        }
        return ans;
        
    }
};