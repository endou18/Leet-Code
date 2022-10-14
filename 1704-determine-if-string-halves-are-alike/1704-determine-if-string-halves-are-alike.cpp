class Solution {
public:
    bool halvesAreAlike(string s) {
        int a=s.size()/2;
        string tmp="aeiouAEIOU";
        int cnt=0,dnt=0;
        for(int i=0;i<a;i++){
            int f=tmp.find(s[i]);
            if(f>=0)cnt++;
        }
        for(int i=a;i<s.size();i++){
            int f=tmp.find(s[i]);
            if(f>=0)dnt++;
        }
        return cnt==dnt;
    }
};