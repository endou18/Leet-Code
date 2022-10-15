class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char,int> mp;
        vector<string> tmp;
        unordered_map<string,int> dp;
        string as;
        for(int i=0;i<s.size();i++){
            as+=s[i];
            if(s[i]==' '){
                tmp.push_back(as.substr(0,as.size()-1));
                as.clear();
            }
            else if(i==s.size()-1)tmp.push_back(as);
        }
        if(pattern.size()!=tmp.size())return false;
        for(int i=0;i<pattern.length();i++){
            mp[pattern[i]]=i+1;
            dp[tmp[i]]=i+1;
        }
        for(int i=0;i<pattern.size();i++){
            if(mp[pattern[i]]!=dp[tmp[i]])return false;
        }
        return true;
    }
};