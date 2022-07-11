class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums)
    {
        int n=nums.size();
        stack<int> st;
        nums.resize(2*n);
        //copy the next part
        for(int i=0;i<n;i++)
        {
            nums[n+i]=nums[i];
        }
        
        vector<int> ans(n,-1);
        st.push(nums[2*n-1]);
        
        for(int i=2*n-2;i>=0;i--)
        {
            while(!st.empty()&&st.top()<=nums[i])
                st.pop();
            
            if(i<n)
            {
                if(!st.empty())
                    ans[i]=st.top();
            }
            st.push(nums[i]);
            
        }
        return ans;
        
    }
};