class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums)
    {
        
        vector<int> odd;vector<int> even;
        
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]%2!=0)
                odd.push_back(nums[i]);
            else
                even.push_back(nums[i]);
        }
        
        
        int x=0;int y=0;
        for(int i=0;i<nums.size();i++)
        {
            if(i==0||i%2==0)
            {
                nums[i]=even[x];
                x++;
                
            }
            else
            {
                nums[i]=odd[y];y++;
            }
            
        }
        
        return nums;
        
    }
};