class Solution {
    int solve(vector<int> &arr,vector<int> &dp,int i){
        if(i==arr.size()-1){
            return 0;
        }else if(i>=arr.size()){
            return 1e4+1;
        }
        if(dp[i]!=-1) return dp[i];
        return dp[i]=min(abs(arr[i]-arr[i+1])+solve(arr,dp,i+1),abs(arr[i]-arr[i+2])+solve(arr,dp,i+2));
    }
  public:
    int minCost(vector<int>& height) {
        // Code here
        vector<int> dp(height.size()+1,-1);
        return solve(height,dp,0);
    }
};