class Solution {
public:
    int getMaximumGenerated(int n)
    {
        if(n==0)
            return 0;
        int ar[n+1];
        ar[0]=0;ar[1]=1;
        int ans=1;
        for(int i=2;i<=n;i++)
        {
            if(i%2==0)
            {
                ar[i]=ar[i/2];
            }
            else
            {
                ar[i]=ar[i/2]+ar[(i/2)+1];
            }
            ans=max(ar[i],ans);
        }
        return ans;
        
    }
};