class Solution {
    int solve(vector<int> &arr,vector<int> &dp,int i){
        if(i>=arr.size()){
            return 0;
        }
        if(dp[i]!=-1) return dp[i];
        int pick=arr[i]+solve(arr,dp,i+2);
        int notPick = solve(arr,dp,i+1);
        return dp[i]=max(pick,notPick);
    }
  public:
    int findMaxSum(vector<int>& arr) {
        // code here
        vector<int> dp(arr.size(),-1);
        return solve(arr,dp,0);
    }
};