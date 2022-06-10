class Solution {
public:
    string addBinary(string a, string b)
    {
        int n1=a.size();int n2=b.size();
        if(n1<n2)
        {
            for(int i=1;i<=abs(n2-n1);i++)
            {
                a='0'+a;
            }
        }
        else if(n2<n1)
        {
            for(int i=1;i<=abs(n2-n1);i++)
            {
                b='0'+b;
            }
        }
        int n=a.size();
        string ans="";
        bool f=false;
        for(int i=n-1;i>=0;i--)
        {
            if(a[i]=='1'&&b[i]=='1')
            {
                if(f)
                {
                    ans='1'+ans;
                    
                }
                else
                {
                    ans='0'+ans;f=true;
                }
            }
            else if(a[i]=='1'||b[i]=='1')
            {
                if(f)
                {
                    ans='0'+ans;
                    
                }
                else
                {
                    ans='1'+ans;
                }
            }
            else
            {
                if(f)
                {
                    ans='1'+ans;f=false;
                }
                else
                {
                    ans='0'+ans;
                }
            }
        }
        if(f)
            ans='1'+ans;
        return ans;
        
    }
};