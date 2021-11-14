class Solution {
public:
    int minPairSum(vector<int>& nums){
        
        sort(nums.begin(),nums.end());
        
        int n=nums.size();
        
        
        int val=nums[0]+nums[n-1];
        
        for(int i=0;i<n;i++)
        {
            val=max(val,(nums[i]+nums[n-1-i]));
        }
        
        return val;
        
    }
};