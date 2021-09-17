class Solution {
public:
    int findPeakElement(vector<int>& nums)
    {
        int n=nums.size();
        
        if(n==1)
            return 0;
        
        if(n==0)
            return 0;
        bool f=true;
        for(int i=0;i<n-1;i++)
        {
            if(nums[i+1]<nums[i])
            {
                
            }
            else
                f=false;
        }
        
        if(f==true)
            return 0;
        
        
        for(int i=1;i<n-1;i++)
        {
            if((nums[i]-nums[i-1]>0)&&(nums[i]-nums[i+1]>0))
            {
                return i;
            }
        }
        return (n-1);
        
    }
};