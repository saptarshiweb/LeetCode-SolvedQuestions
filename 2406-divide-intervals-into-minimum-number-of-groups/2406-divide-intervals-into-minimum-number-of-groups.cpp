class Solution {
public:
    int minGroups(vector<vector<int>>& val)
    {
        int ans=1;int n=val.size();
        
        vector<int> en;vector<int> dep;
        
        for(int i=0;i<n;i++)
        {
            en.push_back(val[i][0]);dep.push_back(val[i][1]);
        }
        sort(en.begin(),en.end());
        sort(dep.begin(),dep.end());
        
        int i=1,j=0;
        int cur=1;
        while(i<n)
        {
            ans=max(ans,cur);
            if(en[i]>dep[j])
            {
                cur--;ans=max(ans,cur);j++;
            }
            else
            {
                cur++;ans=max(ans,cur);i++;
            }
        }
        return ans;
    }
};