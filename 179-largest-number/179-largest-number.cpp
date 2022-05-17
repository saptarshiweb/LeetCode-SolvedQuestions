bool solve(int k, int j)
    {
        string a=to_string(k);string b=to_string(j);
        return a+b>b+a;
    }

class Solution {
public:
    
    
    string largestNumber(vector<int>& nums)
    {
        
        sort(nums.begin(),nums.end(),solve);
        string ans="";
        for(int i=0;i<nums.size();i++)
            ans+=to_string(nums[i]);
        if(ans[0]=='0')
            return "0";
        return ans;
    }
};