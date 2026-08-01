class Solution {\
    bool solve(vector<int> &arr,vector<vector<int>> &dp,int i,int target){
        if(target==0){
            return true;
        }
        if(i<0 || target<0){
            return false;
        }
        if(dp[i][target]!=-1) return dp[i][target];
        return dp[i][target]= solve(arr,dp,i-1,target) || solve(arr,dp,i-1,target-arr[i]);
    }
  public:
    bool isSubsetSum(vector<int>& arr, int sum) {
        // code here
        int n=arr.size();
        vector<vector<int>> dp(n,vector<int>(sum+1,-1)); 
        return solve(arr,dp,n-1,sum);
    }
};