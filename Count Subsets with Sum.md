## 01. Count Subsets with Sum

The problem can be found at the following link: [Question Link](https://www.geeksforgeeks.org/problems/perfect-sum-problem5633/1)

### Problem Description

**Task:** Given an array arr[] of non-negative integers and an integer target, the task is to count all subsets of the array whose sum is equal to the given target.

#### Examples

##### Example 1

- **Input:**
```text
arr[] = [5, 2, 3, 10, 6, 8], target = 10
```
- **Output:**
```text
3
```
- **Explanation:** The subsets {5, 2, 3}, {2, 8}, and {10} sum up to the target 10.

##### Example 2

- **Input:**
```text
arr[] = [2, 5, 1, 4, 3], target = 10
```
- **Output:**
```text
3
```
- **Explanation:** The subsets {2, 1, 4, 3}, {5, 1, 4}, and {2, 5, 3} sum up to the target 10.

##### Example 3

- **Input:**
```text
arr[] = [5, 7, 8], target = 3Output: 0
```
- **Explanation:** There are no subsets of the array that sum up to the target 3.

##### Example 4

- **Input:**
```text
arr[] = [35, 2, 8, 22], target = 0Output: 1
```
- **Explanation:** The empty subset is the only subset with a sum of 0.

### Time and Auxiliary Space Complexity

- **Expected Time Complexity:** O(n*target)
- **Expected Auxiliary Space Complexity:** O(n*target)

### Accepted Solutions (1)

#### Solution 1 (C++)

- **Submitted:** 2026-10-21 15:59:29
- **Status:** Correct
- **Marks:** 4

```cpp
class Solution {
  public:
    int perfectSum(vector<int>& arr, int target) {
        // code here
        int n=arr.size();
        vector<vector<int>> dp(n+1,vector<int>(target+1));
        for(int i=0;i<=n;i++){
            dp[i][0]=1;
        }
        for(int i=1;i<=n;i++){
            for(int j=0;j<=target;j++){
                int take=0;
                int not_take=dp[i-1][j];
                if(arr[i-1]<=j){
                    take=dp[i-1][j-arr[i-1]];
                }
                dp[i][j]=take+not_take;
            }
        }
        return dp[n][target];
    }
};
```

*Generated on: 10/25/2026, 2:24:28 AM*