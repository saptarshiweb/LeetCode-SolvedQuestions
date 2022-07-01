class Solution {
public:
    vector<int> pancakeSort(vector<int>& arr)
    {
        int n=arr.size();
        int cur=n;
        vector<int> ans;
        while(cur>0)
        {
            if(arr[cur-1]!=cur)
            {
                int i=0;
                while(i<n&&arr[i]!=cur)
                {
                    i++;
                }
                if(i==0)
                {
                    ans.push_back(cur);
                    reverse(arr.begin(),arr.begin()+cur);
                }
                else
                {
                    ans.push_back(i+1);
                    reverse(arr.begin(),arr.begin()+i+1);
                    ans.push_back(cur);
                    reverse(arr.begin(),arr.begin()+cur);
                }
                cur--;
                
            }
            else
            {
                cur--;
            }
        }
        return ans;
        
    }
};