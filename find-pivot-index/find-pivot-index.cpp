class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        
        if(nums.size()==0)
            return -1;
        else if(nums.size()==1)
        {
            return -1;
        }
        else if(nums.size()==2)
        {
            if(nums[1]==0)
                return 0;
            else if(nums[0]==0)
                return 1;
            else 
                return -1;
        }
        
        
        
        vector<int> s;
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            s.push_back(sum);
            
        }
        
        if((sum-nums[0])==0)
        {
            return 0;
        }
        
        for(int i=1;i<nums.size()-1;i++)
        {
            int l=s[i-1];
            int r=sum-s[i];
            
            if(l==r)
            {
                return i;
            }
        }
        
        if((sum-nums[nums.size()-1]==0))
        {
            return(nums.size()-1);
        }
        
        
        return (-1);
        
        
        
    }
};