class Solution {
public:
    long long countVowels(string word)
    {
        long long n=word.size();
        long long dp[n+1];
        long long ans=0;
  long long i=0;      if(word[i]=='a'||word[i]=='e'||word[i]=='i'||word[i]=='o'||word[i]=='u')
        dp[0]=1;
        else
            dp[0]=0;
        ans+=dp[0];
        
        for(i=1;i<n;i++)
        {
            if(word[i]=='a'||word[i]=='e'||word[i]=='i'||word[i]=='o'||word[i]=='u')
            dp[i]=dp[i-1]+i+1;
            else
                dp[i]=dp[i-1];
            ans+=dp[i];
        }
        return ans;
        
        
    }
};