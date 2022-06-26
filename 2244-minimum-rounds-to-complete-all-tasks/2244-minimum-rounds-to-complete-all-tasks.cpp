class Solution {
public:
   
    int minimumRounds(vector<int>& nums)
    {
        int n=nums.size();
        map<int,int> mp;
        
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
            
        }
        
        
        sort(nums.begin(),nums.end());
        nums.erase(unique(nums.begin(),nums.end()),nums.end());
        
        int ans=0;
        for(auto it=nums.begin();it!=nums.end();it++)
        {
            int j=*it;
            if(mp[j]==1)
                return -1;
            ans+=(mp[j]/3);
            if(mp[j]%3!=0)
                ans++;
        }
        return ans;
        
        
    }
};