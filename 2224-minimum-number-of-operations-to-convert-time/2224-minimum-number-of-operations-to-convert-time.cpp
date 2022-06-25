class Solution {
public:
    int convertTime(string current, string correct)
    {
        int h1=stoi(current.substr(0,2));
        int m1=stoi(current.substr(3,2));
        
        int h2=stoi(correct.substr(0,2));
        int m2=stoi(correct.substr(3,2));
        
        int diff=m2-m1;
        
        diff+=(h2-h1)*60;
        
        int ans=0;
        ans+=diff/60;
        diff=diff%60;
        ans+=diff/15;
        diff=diff%15;
        ans+=diff/5;
        diff=diff%5;
        ans+=diff/1;
        return ans;
        
    }
};