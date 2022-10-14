class Solution {
public:
    int minSteps(string s, string t) {
        int ans=0;
        unordered_map<char,int> mp;
        for(auto &c:s)mp[c]++;
        for(auto &d:t)mp[d]--;
        for(auto &x:mp){
            if(x.second>0)ans+=x.second;
        }
        return ans;
    }
};