class Solution {
public:
    bool canBeIncreasing(vector<int>& nums)
    {
        bool f=true;
        
       
        
        
        
        
        int n=nums.size();
        
        if(n==2)
        {
           return true;
        }
        
        
        for(int i=0;i<n;i++)
        {
            if(nums[i+1]<nums[i])
            {
                f=false;break;
            }
        }
        
        if(f==true)
            return true;
        
        f=false;
        
        
        for(int i=0;i<n;i++)
        {
            vector<int> a(nums);
            
            a.erase(a.begin()+i);
            
            bool flag=true;
            
            for(int j=0;j<a.size()-1;j++)
            {
                if(a[j+1]<=a[j])
                {
                    flag=false;break;
                }
            }
            
            if(flag==true)
                return true;
            
            
            
            a.clear();
        }
        
        return false;
        
        
        
        
    }
};