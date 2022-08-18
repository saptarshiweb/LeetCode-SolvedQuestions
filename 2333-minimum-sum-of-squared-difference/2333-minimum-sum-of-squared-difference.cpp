class Solution {
public:
    long long minSumSquareDiff(vector<int>& nums1, vector<int>& nums2, int k1, int k2) {
        
        long long ans=0;
        vector<int> diff;int n=nums1.size();
        for(int i=0;i<n;i++)
        {
            diff.push_back(abs(nums1[i]-nums2[i]));
        }
        sort(diff.begin(),diff.end());reverse(diff.begin(),diff.end());
        unordered_map<int,int> m;
        
        for(int i=0;i<n;i++)
        {
            m[diff[i]]++;
        }
        int j=k1+k2;int val=diff[0];
        while(j>0 && val>0)
        {
            if(j>m[val])
            {
                j-=m[val];m[val-1]+=m[val];m[val]=0;val--;
            }
            else
            {
                m[val]=m[val]-j;m[val-1]+=j;j=0;
            }
            
            
            
        }
        for(auto it : m)
        {
            long long val=it.first;long long c=it.second;
            if(val>0 && c>0)
            {
                long long u=(long long)(val*val);
                u=c*u;
                ans+=u;
            }
        }
        
        return ans;
        
    }
};