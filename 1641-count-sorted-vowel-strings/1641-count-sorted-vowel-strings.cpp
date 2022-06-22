class Solution {
public:
    int countVowelStrings(int n)
    {
       if(n==1)
           return 5;
        
        int a=1,b=1,c=1,d=1,e=1;
        for(int i=1;i<=n;i++)
        {
            a=a+b+c+d+e;
            b=b+c+d+e;
            c=c+d+e;
            d=d+e;
        }
        return (a);
        
        
    }
};