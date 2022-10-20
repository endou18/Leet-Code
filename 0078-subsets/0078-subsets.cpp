class Solution {
public:
    void check(int ind,vector<int> &dp,vector<vector<int>> &ans,vector<int> &nums,int n){
        if(ind==n){
            ans.push_back(dp);
            return ;
        }
        dp.push_back(nums[ind]);
        check(ind+1,dp,ans,nums,n);
        dp.pop_back();
        check(ind+1,dp,ans,nums,n);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> dp;
        vector<vector<int>> ans;
        check(0,dp,ans,nums,nums.size());
        return ans;
    }
};