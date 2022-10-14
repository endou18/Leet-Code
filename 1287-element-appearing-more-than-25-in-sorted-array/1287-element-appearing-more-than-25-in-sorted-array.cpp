class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        unordered_map<int,int> mp;
        for(auto &c:arr)mp[c]++;
        int maxi=0;
        for(auto &c:mp){
            maxi=max(maxi,c.second);
        }
        for(auto &c:mp){
            if(c.second==maxi)return c.first;
        }
        return 0;
    }
};