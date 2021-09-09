class Solution {
public:
    bool isPowerOfTwo(int n)
    {
        
        if(n<0)
            return false;
        
        if(n==1)
            return true;
        
        if(n==0)
            return false;
        
        
        if(n%2!=0)
            return false;
        
        while(n!=0)
        {
            if(n%2==1)
            {
                n=n/2;
                if(n==0)
                    return true;
                else
                    return false;
            }
            
            n=n/2;
        }
        
        return true;
        
    }
};