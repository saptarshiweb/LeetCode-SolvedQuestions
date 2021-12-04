class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k)
    {
        int n=nums.size();
        if(k==1)
        {
            int val=*max_element(nums.begin(),nums.end());
            double ans=(double)val;
            return ans;
        }
        int i=0;
        int sum=0;
        while(i<k)
        {
            sum+=nums[i];
            i++;
            
        }
        int j=0;
        
        double ans=(double)sum;
        
        
        while(i<n)
        {
            sum=sum+nums[i]-nums[j];
            ans=(double)(max(ans,(double)sum));
            
            j++;i++;
        }
        ans=ans/k;
        return ans;
        
        
        
    }
};