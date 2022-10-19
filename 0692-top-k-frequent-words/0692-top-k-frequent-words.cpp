class Solution {
public:
    static bool comparator(pair<string,int> p1, pair<string,int> p2)
    {
        if(p1.second>p2.second || (p1.second==p2.second && p1.first<p2.first))
            return true;
        return false;
    }
    vector<string> topKFrequent(vector<string>& words, int k) {
        vector<string> ans;
        unordered_map<string,int> mp;
        for(auto &c:words)mp[c]++;
        vector<pair<string,int>> arr;
        for(auto &c:mp){
            arr.push_back(make_pair(c.first,c.second));
        }
        sort(arr.begin(),arr.end(),comparator);
        for(int i=0;i<k;i++){
            ans.push_back(arr[i].first);
        }
        return ans;
    }
};