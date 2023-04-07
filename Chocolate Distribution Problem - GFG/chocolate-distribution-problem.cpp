//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    #define ll long long
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m)
    {
        vector<ll> copy(a);
        
        sort(copy.begin(),copy.end());
        ll ans=copy[n-1]-copy[0];
        
        ll i=0;
        
        while(i<n)
        {
            if((i+m-1)<n)
            {
                if(copy[i+m-1]-copy[i]<ans)
                ans=copy[i+m-1]-copy[i];
            }
            i++;
        }
        return ans;
    }   
};

//{ Driver Code Starts.
int main() {
	long long t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		vector<long long> a;
		long long x;
		for(long long i=0;i<n;i++)
		{
			cin>>x;
			a.push_back(x);
		}
		
		long long m;
		cin>>m;
		Solution ob;
		cout<<ob.findMinDiff(a,n,m)<<endl;
	}
	return 0;
}
// } Driver Code Ends