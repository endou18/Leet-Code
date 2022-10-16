class Solution {
public:
    void comb(int ind, vector<int> &dp,vector<int> &arr,vector<vector<int>> &ans,int target){
        if(ind==arr.size()){
            if(target==0){
                ans.push_back(dp);
            }
            return;
        }
        if(arr[ind]<=target){
            dp.push_back(arr[ind]);
            comb(ind, dp,arr,ans,target-arr[ind]);
            dp.pop_back();
        }
        comb(ind+1,dp,arr,ans,target);
}
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> dp;
        vector<vector<int>> ans;
        comb(0,dp,candidates,ans,target);
        return ans;
    }
};