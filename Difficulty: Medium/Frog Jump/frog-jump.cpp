class Solution {
  public:
    int minCost(vector<int>& height) {
        // Code here
        int n=height.size();
        vector<int> dp(n+1,-1);
        dp[n-1]=0;
        for(int i=n-2;i>=0;i--){
            int step1=dp[i+1]+abs(height[i]-height[i+1]);
            int step2=INT_MAX;
            if(i<n-2){
                step2=dp[i+2]+abs(height[i]-height[i+2]);
            }
            dp[i]=min(step1,step2);
        }
        return dp[0];
    }
};