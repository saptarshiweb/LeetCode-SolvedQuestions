class Solution {
public:
    
bool two(int n)
{
   if(n==0)
   return false;
 
   return (ceil(log2(n)) == floor(log2(n)));
}
    vector<int> countBits(int n)
    {
        vector<int> ans;int c=0;
        int ar[100001];
        memset(ar,-1,sizeof(ar));
        ar[0]=0;
        for(int i=1;i<=10;i++)
        {
            if(two(i)==true)
            {
                c=1;
            }
            else if(i%2==0)
            {
                
            }
            else
            {
                c++;
            }
            ar[i]=c;
        }
        
        for(int i=0;i<=n;i++)
        {
            if(ar[i]!=-1)
                ans.push_back(ar[i]);
            else
            {
                if(i%2==0)
                {
                    ar[i]=ar[i/2];
                }
                else
                {
                    ar[i]=ar[i/2]+1;
                }
                ans.push_back(ar[i]);
            }
        }
        return ans;
        
        
    }
};