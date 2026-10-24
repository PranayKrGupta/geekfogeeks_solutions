## 01. Subset Sum Problem

The problem can be found at the following link: [Question Link](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)

### Problem Description

**Task:** Given an array of positive integers arr[] and a value sum, find if there is a subset of arr[] with sum equal to given sum. Examples:Input: arr[] = [3, 34, 4, 12, 5, 2], sum = 9Output: true

#### Examples

##### Example 1

- **Explanation:** Here there exists a subset with target sum = 9, 4+3+2 = 9.

##### Example 2

- **Input:**
```text
arr[] = [3, 34, 4, 12, 5, 2], sum = 30
```
- **Output:**
```text
trueExplanation: The entire array can be taken as a subset, giving 1 + 2 + 3 = 6.
```
- **Explanation:** There is no subset with target sum 30.Input: arr[] = [1, 2, 3], sum = 6

### Time and Auxiliary Space Complexity

- **Expected Time Complexity:** O(sum*n)
- **Expected Auxiliary Space Complexity:** O(sum)

### Accepted Solutions (3)

#### Solution 1 (C++)

- **Submitted:** 2026-10-21 15:08:11
- **Status:** Correct
- **Marks:** 0

```cpp
class Solution {
  public:
    bool isSubsetSum(vector<int>& arr, int sum) {
        // code here
        vector<vector<bool>> dp(arr.size()+1,vector<bool>(sum+1,false));
        for(int i=0;i<=arr.size();i++){
            dp[i][0]=true;
        }
        for(int i=1;i<=arr.size();i++){
            for(int j=1;j<=sum;j++){
                int not_take=dp[i-1][j];
                bool take=false;
                if(arr[i-1]<=j){
                    take=dp[i-1][j-arr[i-1]];
                }
                dp[i][j]=take||not_take;
            }
        }
        return dp[arr.size()][sum];
    }
};
```

#### Solution 2 (C++)

- **Submitted:** 2026-08-01 12:21:31
- **Status:** Correct
- **Marks:** 0

```cpp
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
```

#### Solution 3 (C++)

- **Submitted:** 2026-07-13 09:49:22
- **Status:** Correct
- **Marks:** 4

```cpp
class Solution {
	bool solve(const vector<int> & arr, int sum, int idx) {
		if (sum == 0) {
			return true;
		}
		if (sum<0 || idx == arr.size()) {
			return false;
		}
		return solve(arr, sum-arr[idx], idx + 1) || solve(arr, sum, idx + 1);
	}
	public:
	bool isSubsetSum(vector<int>& arr, int sum) {
		// code here
		return solve(arr,sum,0);
	}
};
```

*Generated on: 10/25/2026, 2:24:09 AM*