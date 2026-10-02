## 01. 0 - 1 Knapsack Problem

The problem can be found at the following link: [Question Link](https://www.geeksforgeeks.org/problems/0-1-knapsack-problem0945/1)

### Problem Description

**Task:** Given two arrays, val[] and wt[], where each element represents the value and weight of an item respectively, and an integer W representing the maximum capacity of the knapsack (the total weight it can hold).Put the items into the knapsack such that the total value obtained is maximum without exceeding the capacity W.Note: You can either include an item completely or exclude it entirely — fractional selection of items is not allowed. Each item is available only once.Examples :Input: W = 4, val[] = [1, 2, 3], wt[] = [4, 5, 1]Output: 3Explanation: Choose the last item, which weighs 1 unit and has a value of 3.Input: W = 3, val[] = [1, 2, 3], wt[] = [4, 5, 6] Output: 0Explanation: Every item has a weight exceeding the knapsack's capacity (3).Input: W = 5, val[] = [10, 40, 30, 50], wt[] = [5, 4, 2, 3] Output: 80Explanation: Choose the third item (value 30, weight 2) and the last item (value 50, weight 3) for a total value of 80.

### Time and Auxiliary Space Complexity

- **Expected Time Complexity:** O (n * W)
- **Expected Auxiliary Space Complexity:** O (W)

### Accepted Solutions (1)

#### Solution 1 (C++)

- **Submitted:** 2026-09-24 14:25:15
- **Status:** Correct
- **Marks:** 4

```cpp
class Solution {
	int func(vector<int> &val, vector<int> &wt, vector<vector<int>> &dp,int w, int idx) {
		if(idx==0){
		    if(wt[0]<=w){
		        return val[0];
		    }else{
		        return 0;
		    }
		}
		if(dp[idx][w]!=-1){
		    return dp[idx][w];
		}
		int take=INT_MIN;
		if(wt[idx]<=w){
		    take=val[idx]+func(val,wt,dp,w-wt[idx],idx-1);
		}
		int notTake = func(val,wt,dp,w,idx-1);
		return dp[idx][w]=max(take,notTake);
	}
	public:
	int knapsack(int W, vector<int> &val, vector<int> &wt) {
		// code here
		int idx = val.size();
		vector<vector<int>> dp(idx + 1, vector<int>(W + 1,-1));
		return func(val,wt,dp,W,idx-1);
	}
};
```

*Generated on: 10/2/2026, 8:03:55 AM*