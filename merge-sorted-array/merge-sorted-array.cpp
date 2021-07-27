class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
       
       if(m==0)
       {
           nums1.clear();
           
           for(int i=0;i<n;i++)
               nums1.push_back(nums2[i]);
           
           sort(nums1.begin(),nums1.end());
           
           return;
       }
        
        if(n==0)
        {
            sort(nums1.begin(),nums1.end());return;
        }
        
        sort(nums1.begin(),nums1.end());
        
       int i=0;int j=0;
        
        while(nums1[i]!=0)
        {
            i++;
        }
        
        while(j<n)
        {
            nums1[i]=nums2[j];j++;i++;
        }
        
        sort(nums1.begin(),nums1.end());
        
        return;
        
    }
};