class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        
        int j=0;
        
        int big=0;int n=0;
        
        while(j<nums.size())
        {
            if((upper_bound(nums.begin(),nums.end(),nums[j])-lower_bound(nums.begin(),nums.end(),nums[j]))>big)
            {
                big=(upper_bound(nums.begin(),nums.end(),nums[j])-lower_bound(nums.begin(),nums.end(),nums[j]));
                n=nums[j];
                
            }
            
            if(j==nums.size()-1)
                return n;
            if(nums[j+1]==nums[j])
            j=upper_bound(nums.begin(),nums.end(),nums[j])-nums.begin();
            else
                j++;
            
            
            
            
        }
        return n;
        
        
        
    }
};