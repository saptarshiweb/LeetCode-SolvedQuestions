class Solution {
public:
    int maxArea(vector<int>& height)
    {
        //two pointer approach
        int n=height.size();
        int ans=INT_MIN;
        
        int st=0,e=n-1;
        
        while(st<=e)
        {
            int area=min(height[st],height[e])*(abs(e-st));
            ans=max(ans,area);
            if(height[st]<height[e])
                st++;
            else
                e--;
        }
        return ans;
        
        
    }
};