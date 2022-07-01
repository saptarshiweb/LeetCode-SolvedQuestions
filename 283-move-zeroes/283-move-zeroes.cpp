class Solution {
public:
    void moveZeroes(vector<int>& nums)
    {
        int k=0;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            if(nums[i]==0)
                continue;
            int tem=nums[i];
            nums[i]=0;
            nums[k++]=tem;
        }
        
        
    }
};