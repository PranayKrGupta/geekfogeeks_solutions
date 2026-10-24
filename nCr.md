## 01. nCr

The problem can be found at the following link: [Question Link](https://www.geeksforgeeks.org/problems/ncr1019/1)

### Problem Description

**Task:** Given two integers n and r, find the value of the binomial coefficient nCrA binomial coefficient nCr can be defined as the coefficient of x^r in the expansion of (1 + x)^n that gives the number of ways to choose r objects from a set of n objects without considering the order.The binomial coefficient nCr is calculated as : C(n,r) = n! / r! * (n-r) !Note: If r is greater than n, return 0. It is guaranteed that the value of ^nC_r will fit within a 32-bit integer.Examples:Input: n = 5, r = 2

#### Examples

##### Example 1

- **Output:**
```text
0 Explaination: Since r is greater than n, thus 2C4 = 0Input: n = 5, r = 0Output: 1 Explaination: The value of ^5C_0 is calculated as 5! / ((5−0)! * 0!) = 5! / (5! * 0!) = 1.
```

### Time and Auxiliary Space Complexity

- **Expected Time Complexity:** O(min(r, n-r))
- **Expected Auxiliary Space Complexity:** O(1)

### Accepted Solutions (2)

#### Solution 1 (C++)

- **Submitted:** 2026-10-25 02:22:05
- **Status:** Correct
- **Marks:** 0

```cpp
//  not optimized fully yet



class Solution {
  public:
    int nCr(int n, int r) {
        // code here
        if(r>n) return 0;
        if(r==n) return 1;
        vector<vector<int>> c(n+1,vector<int>(r+1));
        for(int i=0;i<=n;i++){
            for(int j=0;j<=min(i,r);j++){
                if(i<j) c[i][j]=0;
                else if(j==0 || i==j) c[i][j]=1;
                else c[i][j]=c[i-1][j-1]+c[i-1][j];
            }
        }
        return c[n][r];
    }
};
```

#### Solution 2 (C++)

- **Submitted:** 2026-10-25 02:16:54
- **Status:** Correct
- **Marks:** 4

```cpp
class Solution {
  public:
    int nCr(int n, int r) {
        // code here
        if(r>n) return 0;
        if(r==n) return 1;
        vector<vector<int>> c(n+1,vector<int>(r+1));
        for(int i=0;i<=n;i++){
            for(int j=0;j<=min(i,r);j++){
                if(i<j) c[i][j]=0;
                else if(j==0 || i==j) c[i][j]=1;
                else c[i][j]=c[i-1][j-1]+c[i-1][j];
            }
        }
        return c[n][r];
    }
};
```

*Generated on: 10/25/2026, 2:22:16 AM*