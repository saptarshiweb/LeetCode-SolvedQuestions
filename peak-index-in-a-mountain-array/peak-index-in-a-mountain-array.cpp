class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr)
    {
        int n=arr.size();
        
        for(int i=1;i<n-1;i++)
        {
            int left=arr[i]-arr[i-1];int right=arr[i]-arr[i+1];
            
            if(((left>0)&&(right>0))||((left<0)&&(right<0)))
            {
                return i;
            }
            
        }
        
        return 0;
        
    }
};