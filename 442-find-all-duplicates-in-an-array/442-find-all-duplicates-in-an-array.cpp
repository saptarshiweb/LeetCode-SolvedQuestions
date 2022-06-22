class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums)
    {
        int n=nums.size();
        int ar[n+1];
        memset(ar,-1,sizeof(ar));
        vector<int> ans;
        
        for(int i=0;i<n;i++)
        {
            if(ar[nums[i]]!=-1)
                ans.push_back(nums[i]);
            ar[nums[i]]++;
        }
        return ans;
        
    }
};