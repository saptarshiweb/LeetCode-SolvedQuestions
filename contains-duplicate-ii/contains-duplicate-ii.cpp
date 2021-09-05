class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k)
    {
        if(nums.size()<2)
            return false;
        
        map<int,vector<int>> m;
        
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]].push_back(i);
        }
        
        for(int i=0;i<nums.size();i++)
        {
            if(m[nums[i]].size()>1)
            {
                
                
                int s=m[nums[i]].size();
                int j=0;
                
                while(j<s-1)
                {
                    if((m[nums[i]][j+1]-m[nums[i]][j])<=k)
                        return true;
                    
                    j++;
                }
            }
        }
        
        return false;
        
      
    }
};