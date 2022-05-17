class Solution {
public:
    
    long long smallestNumber(long long num)
    {
        if(num==0)
        {
            return (1LL*0);
        }
        bool sig=true;
        if(num>=0)
            sig=true;
        else
            sig=false;
        num=abs(num);
        string copy=to_string(num);
        long long len=copy.size();
        unordered_map<int,int> m;
        int sm=INT_MAX,big=INT_MIN;
        while(num>0)
        {
            int k=num%10;
            m[k]++;
            big=max(big,k);
            if(k!=0)
            sm=min(sm,k);
            num=num/10;
        }
        
        long long ans=0;
        len--;
        
        if(sig)
        {
        ans+=(sm*(long long)(pow(10,len)));
        len--;
        
        m[sm]--;
        for(int i=0;i<=9;i++)
        {
            while(m[i]>0)
            {
                ans+=(long long)(i*(long long)(pow(10,len--)));
                m[i]--;
            }
        }
            
        }
        else
        {
            ans+=(big*(long long)(pow(10,len)));
        len--;
        
        m[big]--;
        for(int i=9;i>=0;i--)
        {
            while(m[i]>0)
            {
                ans+=(long long)(i*(long long)(pow(10,len--)));
                m[i]--;
            }
        }
            ans=-ans;
        }
        return ans;
                
    }
};