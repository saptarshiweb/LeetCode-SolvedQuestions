class Solution {
public:
    static bool sortbysec(const vector<int> &a,const vector<int> &b)
    {
        return (a[1] > b[1]);
    }
    
    int maximumUnits(vector<vector<int>>& box, int truckSize)
    {
        int ans=0;
        
        sort(box.begin(),box.end(),sortbysec);
        int n=box.size();
        
        for(int i=0;i<n&&truckSize>0;i++)
        {
            ans+=(min(box[i][0],truckSize)*box[i][1]);
            truckSize-=box[i][0];
        }
        return ans;
        
    }
};