class Solution {
public:
    int subsetXORSum(vector<int>& nums)
    {
        int n=nums.size();
        
        if(n==1)
            return nums[0];
        else if(n==0)
            return 0;
        
        
        int sum=0;
        
        for(int i=0;i<n;i++)
            sum|=nums[i];
        
        sum=sum*((int)pow(2,n-1));
        
        return sum;
        
    }
};