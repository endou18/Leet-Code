class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        unordered_map<int, int> mp;
        for(auto &c:arr){
            mp[((c%k)+k)%k]++;
        }
        for(int i=0;i<arr.size();i++){
            int rem=((arr[i]%k)+k)%k;
            if(rem==0){
                if(mp[rem]&1)return false;
            }
            else if(mp[rem]!=mp[k-rem]){
                return false;
            }
        }
        return true;
    }
};