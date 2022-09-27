class Solution {
public:
    int findMin(vector<int>& nums) {
        
        int n=nums.size();
        
        int s=0,e=n-1;
        int mid;
        while(s<=e)
        {
            mid=(e-s)/2 + s;
            
            if(mid<n-1 && nums[mid]>nums[mid+1]) return nums[mid+1];
            
            if(mid>0 && nums[mid-1]>nums[mid]) return nums[mid];
            if(nums[e]<nums[mid])
            {
                s=mid+1;
            }
            else
            {
                e=mid-1;
            }
        }
        
        return nums[mid];
        
    }
};