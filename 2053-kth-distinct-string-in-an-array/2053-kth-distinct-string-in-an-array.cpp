class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string,int> mp;
        for(auto &c:arr)mp[c]++;
        for(auto &c:arr){
            if(mp[c]==1 && --k==0)return c;
        }
        return "";
    }
};