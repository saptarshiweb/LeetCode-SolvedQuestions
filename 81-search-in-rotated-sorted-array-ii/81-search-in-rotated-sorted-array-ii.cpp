class Solution {
public:
    bool search(vector<int>& nums, int t) {
        int n=nums.size();
        int s=0,e=n-1;
        
        while(s<=e)
        {
            int mid=s+(e-s)/2;
            if(nums[mid]==t) return true;
            
            //if left side is sorted
            if((nums[s] == nums[mid]) && (nums[e] == nums[mid]))
            {
                s++;
                e--;
            }
            else if( nums[s]<=nums[mid] )
            {
                if(t>=nums[s] && t<=nums[mid])
                    e=mid-1;
                else
                    s=mid+1;
            }
            else
            {
                if(t<=nums[e] && t>=nums[mid])
                    s=mid+1;
                else
                    e=mid-1;
                
            }
        }
        return false;
        
    }
};