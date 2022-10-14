class Solution {
public:
    bool buddyStrings(string s, string goal) {
        int n=s.size(),l=0;
        if(s==goal)return (set<char> (s.begin(),s.end()).size()<s.size());
        while(l<n && s[l]==goal[l])l++;
        int r=n-1;
        while(r>=0 && s[r]==goal[r])r--;
        if(l<r)swap(s[l],s[r]);
        return s==goal;
    }
};