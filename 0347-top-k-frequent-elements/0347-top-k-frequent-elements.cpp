class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        for(auto &c:nums){
            mp[c]++;
        }
        vector<pair<int,int>> arr;
        for(auto &c:mp){
            arr.push_back(make_pair(c.second,c.first));
        }
        sort(arr.rbegin(),arr.rend());
        vector<int> ans;
        for(int i=0;i<k and i<arr.size();i++){
            ans.push_back(arr[i].second);
        }
        return ans;
    }
};