class Solution {
public:
    int triangularSum(vector<int>& nums)
    {
        int n=nums.size();
        vector<int> v;
        while(n!=1)
        {
            
            for(int i=0;i<n-1;i++)
            {
                v.push_back((nums[i]+nums[i+1])%10);
            }
            nums.clear();
            nums=v;v.clear();
            n--;
        }
        return nums[0];
        
    }
};