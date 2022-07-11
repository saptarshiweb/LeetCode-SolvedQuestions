class Solution {
public:
    int reverse(int x)
    {
        long long int s=0;bool neg=(x>=0)?true:false;
        x=abs(x);
        while(x>0)
        {
            s=s*10+x%10;
            x=x/10;
        }
        if(!neg)
            s=-s;
        if(s>INT_MAX-1||s<INT_MIN)
            return 0;
        else
            return (int)s;
        
    }
};