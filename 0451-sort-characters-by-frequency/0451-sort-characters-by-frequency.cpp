class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> mp;
        for(auto &c:s){
            mp[c]++;
        }
        vector<pair<int,char>> arr;
        for(auto &c:mp){
            arr.push_back(make_pair(c.second,c.first));
        }
        sort(arr.rbegin(),arr.rend());
        string ans;
        for(auto &c:arr){
            int cnt=c.first;
            while(cnt--){
                ans+=c.second;
            }
        }
        return ans;
    }
};