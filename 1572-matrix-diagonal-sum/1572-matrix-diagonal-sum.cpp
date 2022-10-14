class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int m=mat.size();
        int n=mat[0].size();
        int ans=0;
        for(int i=0,j=0;i<m and j<n;i++,j++){
            ans+=mat[i][j];
        }
        for(int i=0,j=n-1;i<m and j>=0;i++,j--){
            ans+=mat[i][j];
        }
        if(m&1)ans-=mat[m/2][n/2];
        return ans;
    }
};