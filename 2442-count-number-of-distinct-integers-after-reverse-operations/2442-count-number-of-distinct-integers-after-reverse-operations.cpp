class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        unordered_map<int,int> mp;
        int n=nums.size();
        for(int i=0;i<n;i++){
            string tmp=to_string(nums[i]);
            reverse(tmp.begin(),tmp.end());
            int tmps=stoi(tmp);
            nums.push_back(tmps);
        }
        for(auto &c:nums)mp[c]++;
        return mp.size();
    }
};