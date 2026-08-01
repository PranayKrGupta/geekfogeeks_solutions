class Solution {
    int solve(vector<int> &arr,vector<vector<int>> &dp,int i,int target){
        if(target<0){
            return 0;
        }
        if(i<0){
            return target==0; 
        }
        if(dp[i][target] != -1) return dp[i][target];
        return dp[i][target]=solve(arr,dp,i-1,target)+solve(arr,dp,i-1,target-arr[i]);
    }
  public:
    int countPartitions(vector<int>& arr, int diff) {
        // Code here
        int sum=0;
        for(int i:arr){
            sum+=i;
        }
        int n=arr.size();
        if(sum<diff || (sum+diff)&1) return 0;
        vector<vector<int>> dp(n,vector<int>(((sum+diff)/2)+1,-1));
        return solve(arr,dp,n-1,(sum+diff)/2);
    }
};