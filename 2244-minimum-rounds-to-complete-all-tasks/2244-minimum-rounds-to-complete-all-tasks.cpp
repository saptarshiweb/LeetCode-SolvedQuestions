class Solution {
public:
   
    int minimumRounds(vector<int>& nums)
    {
        int n=nums.size();
        map<int,int> mp;
        set<int> val;
        
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
            val.insert(nums[i]);
        }
        
        
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++)
        {
            if(mp[nums[i]]==1)
                return -1;
        }
        int ans=0;
        for(auto it=val.begin();it!=val.end();it++)
        {
            int j=*it;
            ans+=(mp[j]/3);
            if(mp[j]%3!=0)
                ans++;
        }
        return ans;
        
        
    }
};