class Solution {
public:
    void check(int ind,vector<int> &dp,set<vector<int>> &ans,vector<int> &nums,int n){
        if(ind==n){
            vector<int> tmp=dp;
            sort(tmp.begin(),tmp.end());
            ans.insert(tmp);
            return ;
        }
        dp.push_back(nums[ind]);
        check(ind+1,dp,ans,nums,n);
        dp.pop_back();
        check(ind+1,dp,ans,nums,n);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        set<vector<int>> ans;
        vector<int> dp;
        vector<vector<int>> result;
        check(0,dp,ans,nums,nums.size());
        for(auto &c:ans){
            // vector<int> tmp;
            // for(auto &d:c){
            //     tmp.push_back(d);
            // }
            result.push_back(c);
        }
        return result;
    }
};