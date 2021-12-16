class Solution {
public:
    
           

    void cal(vector<int> &ar,int t,int i,vector<int> &val,vector<vector<int>> &ans)
    {
        if(i==ar.size())
        {
            if(t==0)
            {
                ans.push_back(val);
            }
            
                return;
        }
        if(ar[i]<=t)
        {
            val.push_back(ar[i]);
            cal(ar,t-ar[i],i,val,ans);
            
            val.pop_back();
        }
        
            cal(ar,t,i+1,val,ans);
        
        
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target)
    {
         vector<vector<int>> ans;
        vector<int> tem;
        cal(candidates,target,0,tem,ans);
        
        return ans;
        
        
        
        
    }
};