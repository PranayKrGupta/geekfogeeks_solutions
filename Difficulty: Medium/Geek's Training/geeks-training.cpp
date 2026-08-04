class Solution {
    int solve(vector<vector<int>> &mat,vector<vector<int>> &dp,int i,int prev){
        if(i>=mat.size()){
            return 0;
        }
        if(prev!=-1 && dp[i][prev]!=-1) return dp[i][prev];
        int maxi=0;
        for(int j=0;j<3;j++){
            if(j!=prev){
                maxi=max(maxi,mat[i][j]+solve(mat,dp,i+1,j));
            }
        }
        return (prev!=-1)?(dp[i][prev]=maxi):maxi;
    }
  public:
    int maximumPoints(vector<vector<int>>& mat) {
        // code here
        vector<vector<int>> dp(mat.size(),vector<int> (3,-1));
        return solve(mat,dp,0,-1);
    }
};