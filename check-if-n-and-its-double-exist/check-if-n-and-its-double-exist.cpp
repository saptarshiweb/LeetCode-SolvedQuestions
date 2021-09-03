class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        
        sort(arr.begin(),arr.end());
        
        for(int i=0;i<arr.size();i++)
        {
            if(binary_search(arr.begin(),arr.end(),arr[i]*2)==true)
            {
                auto it=lower_bound(arr.begin(),arr.end(),arr[i]*2);
                int ind=it-arr.begin();
                
                if(i!=ind)
                {
                    return true;
                }
            }
            
        }
        
        return false;
        
        
        
    }
};